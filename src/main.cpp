#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Dialog window;
    window.showFullScreen();
    window.show();
    return app.exec();
}
