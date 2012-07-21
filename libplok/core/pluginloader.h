#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>
#include "core/plokplugin.h"

class PluginLoader: public QObject
{
    Q_OBJECT

public:
    PluginLoader();
    void loadPlugins();

signals:
    void pluginLoaded(PlokPlugin*);

};

#endif // PLUGINLOADER_H
