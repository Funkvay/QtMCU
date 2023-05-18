import QtQuick 2.0

Rectangle {
    Text {
        anchors.centerIn: parent
        color: "salmon"
        text: "Hello World!"
        font.pixelSize: 30
    }

    test1 {
        id: test1
        bigness: 61
        onGotFood: bigness = 99
    }

    Item {
        Component.onCompleted: test1.feed(5);
    }
}
