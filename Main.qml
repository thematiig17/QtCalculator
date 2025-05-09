import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 300
    height: 200
    title: "Sum Calculator"

    Column {
        anchors.centerIn: parent
        spacing: 10

        TextField {
            id: input1
            placeholderText: "First number"
            inputMethodHints: Qt.ImhDigitsOnly
        }

        TextField {
            id: input2
            placeholderText: "Second number"
            inputMethodHints: Qt.ImhDigitsOnly
        }

        Button {
            text: "Calculate Sum"
            onClicked: {
                sumLogic.add(parseInt(input1.text), parseInt(input2.text))
            }
        }

        Label {
            text: "Result: " + sumLogic.result
            font.pixelSize: 20
        }
    }
}
