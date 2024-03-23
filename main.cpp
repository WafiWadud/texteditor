// main.cpp
#include "DocumentHandler.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  DocumentHandler documentHandler;
  engine.rootContext()->setContextProperty("documentHandler", &documentHandler);
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

  return app.exec();
}
