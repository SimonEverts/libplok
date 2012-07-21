#ifndef IMAGERESOLVERFACTORY_H
#define IMAGERESOLVERFACTORY_H

#include "imageresolver.h"

class ImageResolverFactory
{
    public:
        virtual ImageResolver * instance() = 0;
};
#endif // IMAGERESOLVERFACTORY_H
