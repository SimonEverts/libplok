import QtQuick 2.0

import Plugins 1.0

Rectangle {
    PluginController {
        id : controller
        onStatusUpdated: statusBar.text = status
    }
    width: 800
    height: 600
    color: "grey"

    StatusBar {
        id: statusBar
        text: "h"
    }

    Component.onCompleted: {
        controller.startLoading()
    }

}
