#ifndef IMAGEPROVIDER_H
#define IMAGEPROVIDER_H

#include <QImage>

#include "image.h"

class ImageReader;
//class ExifLoader;

class ImageProvider
{
public:
    explicit ImageProvider(QObject *parent = 0);
    virtual ~ImageProvider (void);

    QImage requestThumbnail( const QString& id, QSize* size, const QSize& requestedSize );

    Image loadThumbnail (QString fileName);
    Image loadPreview (QString fileName);
    Image loadMaster (QString fileName);

    ImageReader* imageReaderFromFormat (QString format);

    QStringList supportedSuffixes (void);

private:
    QList <ImageReader*> m_imageReaders;

//    ExifLoader* m_exifLoader;

    void correctOrientation (QString fileName, QImage& thumb);
    void correctOrientation (QString fileName, Image& thumb);
};

#endif // IMAGEPROVIDER_H
