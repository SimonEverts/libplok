#include "plugincontroller.h"

#include <QDebug>

PluginController::PluginController(QObject *parent) :
    QObject(parent)

{
    pluginLoader = new PluginLoader();

    QObject::connect(pluginLoader, SIGNAL(pluginLoaded(PlokPlugin*)),
                          this, SLOT(addPlugin(PlokPlugin*)));


}



PluginController::~PluginController()
{
    delete pluginLoader;
}

void PluginController::startLoading()
{
    pluginLoader->loadPlugins();
}

void PluginController::addPlugin(PlokPlugin * strin)
{

    emit statusUpdated(QString("hoi"));
}
