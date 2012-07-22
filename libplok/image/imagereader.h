#ifndef IMAGEREADER_H
#define IMAGEREADER_H


#include <QStringList>

#include <QMap>
#include <QVariant>

#include "image.h"

class ImageReader
{
public:

    virtual void openImage (QString imagePath) = 0;

    virtual Image loadThumbnail (void) = 0;
    virtual Image loadPreview (void) = 0;
    virtual Image loadMaster (void) = 0;

    virtual QMap <QString, QVariant> loadInfo (void) = 0;

    virtual QStringList supportedFormats (void) = 0;
};


#endif // IMAGEREADER_H
