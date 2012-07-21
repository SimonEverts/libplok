#ifndef PLOKPLUGIN_H
#define PLOKPLUGIN_H

#include "image/imagereaderfactory.h"
#include "image/imageresolverfactory.h"

class PlokPlugin
{
    public:
virtual ~PlokPlugin() {}
        virtual ImageReaderFactory * imageReaderFactory() = 0;
        virtual ImageResolverFactory * imageResolverFactory() = 0;
};

Q_DECLARE_INTERFACE( PlokPlugin, "org.plok.plugin.plokplugin/1.0")

#endif // PLOKPLUGIN_H

