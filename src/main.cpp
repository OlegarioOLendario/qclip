#include <QGuiApplication>
#include <QClipboard>
#include <QDebug>
#include <iostream>
#include <string>
#include <vector>

#include "qclip.h"


int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);
    std::string str;
    std::string entrada;
    
    /** read piped input.
      * @fix-me: return if no input was piped
      */
    if(argc == 1){
        while(std::getline(std::cin, str, '\n')) entrada += str + "\n";
        qclip Qclip(&app, entrada.c_str());
        return app.exec();
    }
    
    for(int i = 0; i < argc; i++) if( std::string(argv[i]) == std::string("-o")) {
        qclip Qclip(&app);
        return app.exec();
        }
    
    qclip Qclip(&app, argv[1]);

    return app.exec();
}
