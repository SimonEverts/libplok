#include "imagereader_qt.h"

#include <QImage>
#include <QImageReader>

#include <QElapsedTimer>
#include <QDebug>

class ImageReader_qt_p
{
public:
    ImageReader_qt_p() {
        m_random = qrand();
    }

    void openImage (QString imagePath);

    Image loadThumbnail (void);
    Image loadPreview (void);
    Image loadMaster (void);
private:
    QImageReader m_imageReader;

    int m_random;
};


void ImageReader_qt_p::openImage (QString imagePath)
{
    m_imageReader.setFileName( imagePath );
}

Image ImageReader_qt_p::loadThumbnail ()
{
    if (!m_imageReader.canRead())
        return Image();

    m_imageReader.setQuality(25);

    QSize image_size = m_imageReader.size();

    int scale = 1;
    while ((image_size.width() >> scale) > 480)
        scale++;

    QSize scaled_size( image_size.width() / scale,
                       image_size.height() / scale);

    m_imageReader.setScaledSize ( scaled_size);

    QImage image = m_imageReader.read();

    return Image::fromQImage( image );
}

Image ImageReader_qt_p::loadPreview ()
{
    if (!m_imageReader.canRead())
        return Image();

    m_imageReader.setQuality(100);

    QSize image_size = m_imageReader.size();

    m_imageReader.setScaledSize ( image_size);

    QImage image = m_imageReader.read();

    return Image::fromQImage( image );
}

Image ImageReader_qt_p::loadMaster ()
{
    return loadPreview();
}

ImageReader_qt::ImageReader_qt (QObject *parent)
{
    p = new ImageReader_qt_p();
}

ImageReader_qt::~ImageReader_qt()
{
    delete p;
}

void ImageReader_qt::openImage (QString imagePath)
{
    p->openImage(imagePath);
}

Image ImageReader_qt::loadThumbnail()
{
    return p->loadThumbnail();
}

Image ImageReader_qt::loadPreview()
{
    return p->loadPreview();
}

Image ImageReader_qt::loadMaster()
{
    return p->loadMaster();
}

QMap <QString, QVariant> ImageReader_qt::loadInfo (void)
{
    return QMap <QString, QVariant> ();
}

QStringList ImageReader_qt::supportedFormats (void)
{
    QStringList filter;

    QList <QByteArray> supported_formats = QImageReader::supportedImageFormats();

    for (int i=0; i<supported_formats.size(); i++)
        filter << supported_formats.at(i);

    return filter;
}
