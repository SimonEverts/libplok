#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <QObject>
#include <QString>
#include "core/pluginloader.h"

class PluginController : public QObject
{
    Q_OBJECT
public:
    explicit PluginController(QObject *parent = 0);
    ~PluginController();
    
signals:
    void statusUpdated(const QString &status);
public slots:
   void addPlugin(QString);
    void startLoading();

private :
    PluginLoader * pluginLoader;
};

#endif // PLUGINCONTROLLER_H
