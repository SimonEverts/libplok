#ifndef IMAGEREADERFACTOTY_H
#define IMAGEREADERFACTOTY_H

#include "imagereader.h"
class ImageReaderFactory
{
public:
   virtual ImageReader * instance() = 0;
};

#endif // IMAGEREADERFACTOTY_H
