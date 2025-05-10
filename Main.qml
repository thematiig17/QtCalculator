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
            width: 210
        }

        TextField {
            id: input2
            placeholderText: "Second number"
            inputMethodHints: Qt.ImhDigitsOnly
            width: 210
        }
        Row{
            spacing: 10
            Button {
                text: "+"
                width: 100
                height: 100
                onClicked: {
                    sumLogic.add(parseFloat(input1.text), parseFloat(input2.text))
                }
            }
            Button {
                text: "-"
                width: 100
                height: 100
                onClicked: {
                    sumLogic.subtract(parseFloat(input1.text), parseFloat(input2.text))
                }
            }
        }
        Row{
            spacing: 10
            Button {
                text: "*"
                width: 100
                height: 100
                onClicked: {
                    sumLogic.multiply(parseFloat(input1.text), parseFloat(input2.text))
                }
            }
            Button {
                text: "/"
                width: 100
                height: 100
                onClicked: {
                    sumLogic.divide(parseFloat(input1.text), parseFloat(input2.text))
                }
            }
        }


        Label {
            text: "Result: " + sumLogic.result
            font.pixelSize: 20
        }
    }
}
