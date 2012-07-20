#include <QApplication>
#include "mainwindow.h"
#include <QtGui>
#include "image/image.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QDir pluginsDir(qApp->applicationDirPath());
    qDebug() << "Loading plugins";
    pluginsDir.cd("plugins");
    qDebug() << pluginsDir.entryList(QDir::Files);
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        if (plugin) {
            qDebug() << "hoi";
        } else {
            qDebug() << pluginLoader.errorString();
        }
    }

    return a.exec();
}
