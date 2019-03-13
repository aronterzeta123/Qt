#include <QApplication>
#include "MyMainWindow.h"
#include <QMainWindow>
#include <QPushButton>
int main (int argc, char **argv) {
    QApplication app(argc,argv);
    MyMainWindow window;
    window.setWindowTitle(QString::fromUtf8("MainWindow"));
    window.resize(450,300);
    window.Execute();
    QPushButton q("He ma");
    QPushButton h("Aron",&q);
    q.show();
    return app.exec();
}
