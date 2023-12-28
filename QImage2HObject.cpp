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
