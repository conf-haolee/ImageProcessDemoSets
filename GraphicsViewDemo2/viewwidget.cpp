#include "viewwidget.h"
#include <QGraphicsPixmapItem>

ViewWidget::ViewWidget()
{

}

ViewWidget::ViewWidget(QWidget *parent) :
	QGraphicsView(parent),
	m_isTranslate(false),
	m_scene(new QGraphicsScene()),
	m_imageItem(new QGraphicsPixmapItem())

{
	QGraphicsRectItem *rectItem = new QGraphicsRectItem(10,10, 100, 100);

	m_scene->addItem(m_imageItem);
	m_scene->addItem(rectItem);
	setScene(m_scene);

	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setRenderHint(QPainter::Antialiasing);

	// 这啥意思呢
	setSceneRect(INT_MIN / 2, INT_MIN / 2, INT_MAX, INT_MAX);
	setTransformationAnchor(QGraphicsView::AnchorViewCenter);

	centerOn(0, 0);

}

ViewWidget::~ViewWidget()
{
	m_scene->deleteLater();
	delete m_imageItem;
}


void ViewWidget::SetImage(const QImage &image)
{
    pixItem = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    m_imageItem->setPixmap(QPixmap::fromImage(image));
    fitInView(pixItem, Qt::KeepAspectRatio);

	QPoint newCenter(image.width() / 2, image.height() / 2);

	//设置scene中心到图像中点
	centerOn(newCenter);

	show();
}

void ViewWidget::wheelEvent(QWheelEvent *event)
{
	// 滚轮的滚动量
	QPoint scrollAmount = event->angleDelta();
	// 正值表示滚轮远离使用者放大负值表示朝向使用者缩小
	scrollAmount.y() > 0 ? ZoomIn() : ZoomOut();
}

void ViewWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_isTranslate)
	{
		//获取
		QPointF mouseDelta = event->pos() - m_lastMousePos;
		Translate(mouseDelta);
	}
	m_lastMousePos = event->pos();
	QGraphicsView::mouseMoveEvent(event);
}

void ViewWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		m_isTranslate = true;
		m_lastMousePos = event->pos();
	}
	else if (event->button() == Qt::RightButton)
	{
		QPointF point = mapToScene(event->pos());
		//只有点击图片时才发送
		if (scene()->itemAt(point, transform()) != NULL)
		{

			//emit m_imageBox->ImageClick(point.x(), point.y());
		}
	}

	QGraphicsView::mousePressEvent(event);
}

void ViewWidget::mouseReleaseEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
		m_isTranslate = false;

	QGraphicsView::mouseReleaseEvent(event);
}

void ViewWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
	centerOn(m_imageItem->pixmap().width() / 2, m_imageItem->pixmap().height() / 2);
	QGraphicsView::mouseDoubleClickEvent(event);
}

void ViewWidget::ZoomIn()
{
	Zoom(1.1);
}

void ViewWidget::ZoomOut()
{
	Zoom(0.9);
}

void ViewWidget::Zoom(float scaleFactor)
{
	// 防止过小或过大
	qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
	if (factor < 0.07 || factor > 100)
		return;

	scale(scaleFactor, scaleFactor);
}

void ViewWidget::Translate(QPointF delta)
{
	int w = viewport()->rect().width();
	int h = viewport()->rect().height();
	QPoint newCenter(w / 2. - delta.x() + 0.5, h / 2. - delta.y() + 0.5);
	centerOn(mapToScene(newCenter));
}

void ViewWidget::setKeepRatio()
{
    fitInView(pixItem, Qt::KeepAspectRatio);
}

void ViewWidget::setIgnoreRatio()
{
    fitInView(pixItem, Qt::IgnoreAspectRatio);
}

HObject ViewWidget::QImage2HObject(QImage qimage)
{
    HObject hv_image;
    int width = qimage.width();
    int height = qimage.height();
    QImage::Format format = qimage.format();
    if (format == QImage::Format_RGB32 ||
        format == QImage::Format_ARGB32 ||
        format == QImage::Format_ARGB32_Premultiplied)
    {
        GenImageInterleaved(&hv_image, (Hlong)qimage.bits(), "bgrx", qimage.width(), qimage.height(), 0, "byte", width, height, 0, 0, 8, 0);
    }
    else if (format == QImage::Format_RGB888)
    {
        GenImageInterleaved(&hv_image, (Hlong)qimage.bits(), "bgr", qimage.width(), qimage.height(), 0, "byte", width, height, 0, 0, 8, 0);
    }
    else if (format == QImage::Format_Grayscale8 || format == QImage::Format_Indexed8)
    {
        GenImage1(&hv_image, "byte", width, height, (Hlong)qimage.bits());
    }
    return hv_image;
}

void ViewWidget::displayXld(QImage &image)
{
    HObject ho_image = QImage2HObject(image);
    Rgb1ToGray(ho_image, &ho_grayImage);

    Threshold(ho_grayImage, &ho_Regions, 1, 18);

    Connection(ho_Regions, &ho_Connections);

    // 转成 xld类型
    GenContourRegionXld(ho_Connections, &ho_Contours, "border");

    CountObj(ho_Connections, &ho_Number);
    CountObj(ho_Contours, &ho_Cnumber);

    for(int i = 0; i < ho_Number; i++)
    {
        SelectObj(ho_Connections, &ho_ObjectSelect, i+1);
        AreaCenter(ho_ObjectSelect, &ho_area, &Row, &Column);

    }
    for(int i = 0; i < ho_Cnumber; i++)
    {
        SelectObj(ho_Contours, &ho_CObjectSelect, i +1);
        GetContourXld(ho_CObjectSelect, &ho_Row, &ho_Col);
        if(i < 10)
        {
            for(size_t j = 0; j < (size_t)ho_Row.Length(); j++)
            {
                hoPoint1.push_back(QPointF(ho_Col[j].D(),ho_Row[j].D()));
            }

        }
        else {
            return;
        }

    }
    QPen *pen = new QPen();
    pen->setColor(QColor(255, 0, 0));
    pen->setWidth(2);
    for(size_t i = 0; i < hoPoint1.size(); i++)
    {
        m_scene->addEllipse(QRectF(hoPoint1[i],QSize(1,1)), *pen);
        qDebug() << i<<"坐标："<<hoPoint1[i];
    }

}
