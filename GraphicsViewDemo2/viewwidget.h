#ifndef VIEWWIDGET_H
#define VIEWWIDGET_H

#include <QGraphicsView>
#include <QEvent>
#include <QRectF>


#include "qevent.h"

#include <QDebug>
#include<halconcpp/HalconCpp.h>

using namespace HalconCpp;

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


    HObject QImage2HObject(QImage qimage);
    void displayXld(QImage &image);
    void setKeepRatio();
    void setIgnoreRatio();

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

    QVector<QPointF> hoPoint1;
    QVector<QPointF> hoPoint2;
    QVector<QPointF> hoPoint3;


    HObject ho_grayImage;
    HObject ho_Regions;
    HObject ho_Connections;
    HObject ho_Contours;
    HObject ho_ObjectSelect;
    HObject ho_CObjectSelect;

    HTuple ho_area;

    HTuple ho_Number;
    HTuple ho_Cnumber;
    HTuple Row1,Row2;
    HTuple Col1, Col2;
    HTuple Row, Column;
    HTuple ho_Row, ho_Col;


};

#endif // VIEWWIDGET_H
