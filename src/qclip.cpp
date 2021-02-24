#include "qclip.h"
#include <iostream>

qclip::qclip(QGuiApplication* app, QString texto)
{

    QClipboard *cpb = app->clipboard();
    
    QTimer::singleShot(300, app, &QGuiApplication::quit);
    
    
    cpb->setText(texto);
    }
