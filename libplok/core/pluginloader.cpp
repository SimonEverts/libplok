#include "pluginloader.h"

#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QPluginLoader>

PluginLoader::PluginLoader()
{

}

void PluginLoader::loadPlugins()

{
    QDir pluginsDir = QCoreApplication::applicationDirPath();
    qDebug() << "Loading plugins";
    pluginsDir.cd("plugins");
    qDebug() << pluginsDir.entryList(QDir::Files);
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        if (plugin) {
            emit pluginLoaded(QString("Plugins loaded"));
        } else {
            qDebug() << pluginLoader.errorString();
        }
    }

}
