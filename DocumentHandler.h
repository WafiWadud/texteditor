// DocumentHandler.h
#ifndef DOCUMENTHANDLER_H
#define DOCUMENTHANDLER_H

#include <QFile>
#include <QObject>
#include <QTextStream>

class DocumentHandler : public QObject {
  Q_OBJECT
public:
  explicit DocumentHandler(QObject *parent = nullptr);

  Q_INVOKABLE QString loadFile(const QString &filename);
  Q_INVOKABLE void saveFile(const QString &filename, const QString &content);
};

#endif // DOCUMENTHANDLER_H
