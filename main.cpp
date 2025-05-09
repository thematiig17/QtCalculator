#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "sumlogic.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("QtCalculator", "Main");

    SumLogic logic;
    engine.rootContext()->setContextProperty("sumLogic", &logic);

    return app.exec();
}
