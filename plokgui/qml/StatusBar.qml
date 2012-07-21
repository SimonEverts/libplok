import QtQuick 2.0
Rectangle {
    anchors { bottom: parent.bottom; left: parent.left;}
    width: parent.width
    height: 20
    property alias text: status.text

    gradient: Gradient {
        GradientStop { position: 0.0; color: "white" }
        GradientStop { position: 0.1; color: "dimgray" }
        GradientStop { position: 1.0; color: "grey" }
    }

    Text {
        id: status
        anchors { bottom: parent.bottom; bottomMargin: 5; left: parent.left;leftMargin: 10 }
        font.pointSize: 10
        color: "white"
    }
}

