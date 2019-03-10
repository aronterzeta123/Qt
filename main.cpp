#include <QApplication>
#include "MyMainWindow.h"
#include <QMainWindow>
int main (int argc, char **argv) {
    QApplication app(argc,argv);
    MyMainWindow window;
    window.setWindowTitle(QString::fromUtf8("MainWindow"));
    window.resize(450,300);
    window.Execute();
    return app.exec();
}
