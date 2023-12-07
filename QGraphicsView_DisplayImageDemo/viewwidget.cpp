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
	m_scene->addItem(m_imageItem);
	setScene(m_scene);

	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setRenderHint(QPainter::Antialiasing);

	// ��ɶ��˼��
	setSceneRect(INT_MIN / 2, INT_MIN / 2, INT_MAX, INT_MAX);
	setTransformationAnchor(QGraphicsView::AnchorViewCenter);

	centerOn(0, 0);

}

ViewWidget::~ViewWidget()
{
	m_scene->deleteLater();
    if(!m_imageItem)
    {
        delete m_imageItem;
    }
}


void ViewWidget::SetImage(const QImage &image)
{
    pixItem = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    //m_imageItem->setPixmap(QPixmap::fromImage(image));
	m_scene->addItem(pixItem);
    fitInView(pixItem, Qt::KeepAspectRatio);

	QPoint newCenter(image.width() / 2, image.height() / 2);

	//����scene���ĵ�ͼ���е�
	centerOn(newCenter);

	show();
}

void ViewWidget::wheelEvent(QWheelEvent *event)
{
	// ���ֵĹ�����
	QPoint scrollAmount = event->angleDelta();
	// ��ֵ��ʾ����Զ��ʹ���߷Ŵ�ֵ��ʾ����ʹ������С
	scrollAmount.y() > 0 ? ZoomIn() : ZoomOut();
}

void ViewWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_isTranslate)
	{
		//��ȡ
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
		//ֻ�е��ͼƬʱ�ŷ���
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
	// ��ֹ��С�����
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

void ViewWidget::clearItem()
{
    m_scene->clear();
}


