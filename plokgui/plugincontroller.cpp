#include "plugincontroller.h"

#include <QDebug>

PluginController::PluginController(QObject *parent) :
    QObject(parent)

{
    pluginLoader = new PluginLoader();

    QObject::connect(pluginLoader, SIGNAL(pluginLoaded(QString)),
                          this, SLOT(addPlugin(QString)));


}



PluginController::~PluginController()
{
    delete pluginLoader;
}

void PluginController::startLoading()
{
    pluginLoader->loadPlugins();
}

void PluginController::addPlugin(QString strin)
{

    emit statusUpdated(strin);
}
