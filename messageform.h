#ifndef MESSAGEFORM_H
#define MESSAGEFORM_H

#include <QWidget>
#include "messageitem.h"
namespace Ui {
class MessageForm;
}

class MessageForm : public QWidget
{
    Q_OBJECT

public:
    explicit MessageForm(QWidget *parent = 0);
    void setButttonGroup();
    void setMessageId(int id); //处理案件数据
    void setListMessage();  //设置列表消息
    ~MessageForm();
protected:
    void leaveEvent(QEvent *event);
private:
    Ui::MessageForm *ui;
};

#endif // MESSAGEFORM_H
