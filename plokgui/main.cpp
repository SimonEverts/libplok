#include <QApplication>
#include <QQuickView>
#include <QtQuick>
#include <QLabel>
#include <QSplashScreen>

#include "plugincontroller.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qmlRegisterType<PluginController>("Plugins", 1,0, "PluginController");
    QQuickView view;
    view.setSource(QUrl("qrc:/MainWindow.qml"));
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.show();

    return a.exec();
}
