#ifndef IMAGEREADER_QT_H
#define IMAGEREADER_QT_H

#include "image/imagereader.h"

#include <QObject>
#include <QtPlugin>

class ImageReader_qt_p;

class ImageReader_qt : public QObject, public ImageReader
{
	Q_OBJECT

public:
    explicit ImageReader_qt (QObject *parent = 0);
    virtual ~ImageReader_qt (void);

    void openImage (QString imagePath);

    Image loadThumbnail (void);
    Image loadPreview (void);
    Image loadMaster (void);

    QMap <QString, QVariant> loadInfo (void);

    QStringList supportedFormats (void);

private:
    ImageReader_qt_p* p;
};

#endif // IMAGEREADER_QT_H
