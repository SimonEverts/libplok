#ifndef DEFAULTPLOKPLUGIN_H
#define DEFAULTPLOKPLUGIN_H

#include <QObject>

#include "image/imagereaderfactory.h"
#include "image/imageresolverfactory.h"

#include "core/plokplugin.h"
class DefaultPlokPlugin : public QObject, public PlokPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.plok.plugin.plokplugin/1.0" FILE "../plokplugin.json")

    Q_INTERFACES(PlokPlugin)
public:
    DefaultPlokPlugin();

    ImageReaderFactory * imageReaderFactory();
    ImageResolverFactory * imageResolverFactory();
};

#endif // DEFAULTPLOKPLUGIN_H
