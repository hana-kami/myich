#include "allwidget.h"
#include <QApplication>
#include "loadfileqss.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadFileQss::setStyle(":/Allthe.qss"); //加载qss 样式表，用静态方式
    allWidget w;
    w.show();

    return a.exec();
}
