// main.qml
import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "QML Text Editor"

    TextEdit {
        id: textEditor
        anchors.fill: parent
        wrapMode: TextEdit.Wrap
        focus: true
    }

    Button {
        text: "Load"
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        onClicked: textEditor.text = documentHandler.loadFile("text.txt")
    }

    Button {
        text: "Save"
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        onClicked: documentHandler.saveFile("text.txt", textEditor.text)
    }
}

