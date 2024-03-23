// DocumentHandler.cpp
#include "DocumentHandler.h"

DocumentHandler::DocumentHandler(QObject *parent) : QObject(parent) {}

QString DocumentHandler::loadFile(const QString &filename) {
  QFile file(filename);
  if (!file.open(QFile::ReadOnly | QFile::Text))
    return "";
  QTextStream in(&file);
  QString content = in.readAll();
  file.close();
  return content;
}

void DocumentHandler::saveFile(const QString &filename,
                               const QString &content) {
  QFile file(filename);
  if (!file.open(QFile::WriteOnly | QFile::Text))
    return;
  QTextStream out(&file);
  out << content;
  file.close();
}
