#include "dialog.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog w{nullptr};
    //mTimer.show();
    w.show();

    return a.exec();
}
