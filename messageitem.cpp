#include "messageitem.h"
#include "ui_messageitem.h"

MessageItem::MessageItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageItem)
{
    ui->setupUi(this);
}

void MessageItem::setRed(bool flog)
{
    if(flog == true)
    {
        ui->labred->setPixmap(QPixmap(":/images/message/red.png"));
    }
    else {
       ui->labred->setPixmap(QPixmap(""));
    }
}

void MessageItem::setStringPic(QString url)
{
    QString str = "QWidget{border-image:url("+url+")}";
    ui->widPicturePer->setStyleSheet(str);
}

void MessageItem::setName(QString str)
{
    ui->labNameMess->setText(str);
    ui->labNameMess->setStyleSheet({"QLable#labNameMess{color:rgb(91,133,180);}"});
}

void MessageItem::setTime(QString str)
{
    ui->labTimer->setText(str);
    ui->labTimer->setStyleSheet("QLable#labTimer{color:rgb(217,217,217);}");
}

void MessageItem::setInformMessage(QString str)
{
    ui->labInform->setText(str);
    ui->labInform->setStyleSheet("QLable#labInform{color:rgb(49,49,49);}");
}

MessageItem::~MessageItem()
{
    delete ui;
}
