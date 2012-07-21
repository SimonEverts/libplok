#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>

class PluginLoader: public QObject
{
    Q_OBJECT

public:
    PluginLoader();
    void loadPlugins();

signals:
    void pluginLoaded(QString);

};

#endif // PLUGINLOADER_H
