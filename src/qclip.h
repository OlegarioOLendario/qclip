#ifndef _qclip_
#define _qclip_

#include <QObject>
#include <QGuiApplication>
#include <QClipboard>
#include <QTimer>


class qclip : public QObject {
    Q_OBJECT
    
public:
    qclip(QGuiApplication *app);
    qclip(QGuiApplication *app, QString texto);
};

#endif
