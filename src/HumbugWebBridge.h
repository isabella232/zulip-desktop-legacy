#ifndef HUMBUGWEBBRIDGE_H
#define HUMBUGWEBBRIDGE_H

#include <QObject>
#include <QWebView>
#include <QVariant>
#include "HumbugTrayIcon.h"

class HumbugWebBridge : public QObject
{
    Q_OBJECT
public:
    explicit HumbugWebBridge(QObject *parent = 0);

public slots:
    QVariantMap systemInfo();

    void desktopNotification(const QString &title, const QString &content);
    void bell();
    void updateCount(int count);

signals:
    void doUpdateCount(int newCount);
    void doDesktopNotification(const QString& title, const QString& content);
    void doBell();

};

#endif // HUMBUGWEBBRIDGE_H
