#ifndef VIEWWIDGET_H
#define VIEWWIDGET_H

#include <QGraphicsView>
#include <QEvent>
#include <QRectF>


#include "qevent.h"

#include <QDebug>


class ViewWidget : public QGraphicsView
{
public:
    ViewWidget();
	ViewWidget(QWidget *parent);

    ~ViewWidget();

	//void Init(HI_ImageBox * imageBox) { m_imageBox = imageBox; }

	void SetImage(const QImage & image);

    virtual void wheelEvent(QWheelEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;


    void displayXld(QImage &image);
    void setKeepRatio();
    void setIgnoreRatio();
    void clearItem();

public slots:
    void ZoomIn();
    void ZoomOut();
    void Zoom(float scaleFactor);
    void Translate(QPointF delta);

private:
    bool m_isTranslate;
    QPoint m_lastMousePos;

    QGraphicsScene * m_scene;
    QGraphicsPixmapItem * m_imageItem;
    QPixmap pix;
    QGraphicsPixmapItem *pixItem;

};

#endif // VIEWWIDGET_H
