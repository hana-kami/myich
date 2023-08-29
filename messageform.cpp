#include "messageform.h"
#include "ui_messageform.h"

#include <QScrollBar>

MessageForm::MessageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageForm)
{
    ui->setupUi(this);
    //    this->setWindowFlag(Qt::FramelessWindowHint);
        setAttribute(Qt::WA_StyledBackground); //设置样式表
        setButttonGroup();//设置按钮
        setListMessage();//设置列表消息
        ui->listMessage->setStyleSheet("QListWidget{border:1px;background:white;border-radius:5px;}"
                                      "QListWidget::Item{ background:white; height:60px;}"
                                      "QListWidget::Item:hover{background:rgb(246,246,247);}"
                                      );

       QScrollBar* sv = ui->listMessage->verticalScrollBar();
       sv->setStyleSheet("QScrollBar:vertical{background:transparent; width:6px;}"
                         "QScrollBar::handle:vertical{min-height:10px;max-height:20px;background:rgb(224,224,224); width:6px; border-radius:3px;}"
                         "QScrollBar::up-arrow:vertical{border:none;}"
                         "QScrollBar::sub-line:vertical{background:transparent;}"
                         "QScrollBar::add-line:vertical{background:transparent;}");
       this->setStyleSheet("QWidget{border:0px; background:white; border-radius:1px;}");
        ui->labRead->setStyleSheet("QLabel{color:rgb(80,125,175);}");

    //    ui->listMessage->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void MessageForm::setButttonGroup()
{
    ui->widGroupBut->setGeometry(40,60,324,30);
    ui->widGroupBut->setStyleSheet("QWidget#widGroupBut{background:rgb(255.255.255);border:1px solid rgb(187,187,187);border-radius:15px;}");
    //私信按钮
    ui->ptnPer->setParent(ui->widGroupBut);
    ui->ptnPer->setGeometry(0,1,55,28);
    ui->ptnPer->move(10,1);
    ui->ptnPer->setCheckable(true);
    ui->ptnPer->setStyleSheet("QPushButton{color:rgb(55,55,55);border:0px;background:rgb(255,255,255);border:radius:14px}"
                              "QPushButton:hover{color:0px;background:rgb(244,244,244);border-radius:14px}"
                              "QPushButton:clecked{color:rgb(255,255,255);background:rgb(187,187,187);border-radius:14px}"
                              );
    
    //评论按钮
    ui->ptnComment->setParent(ui->widGroupBut);
    ui->ptnComment->setGeometry(0,1,55,28);
    ui->ptnComment->move(86,1);
    ui->ptnComment->setCheckable(true);
    ui->ptnComment->setStyleSheet("QPushButton{color:rgb(55,55,55);border:0px;background:rgb(255,255,255;border-radius:14px)}"
                                  "QPushButton:hover{border:0px;background:rgb(244,244,244);border-radius}"
                                  "QPushButton:clecked{color:rgb(255,255,255);background:rgb(187,187,187);border-radius:14px}"
                                  );
    
    //@我
    ui->ptnMe->setParent(ui->widGroupBut);
    ui->ptnMe->setGeometry(0,1,55,28);
    ui->ptnMe->move(171,1);
    ui->ptnMe->setCheckable(true);
    ui->ptnMe->setStyleSheet("QPushButton{color:rgb(55,55,55);border:0px;background:rgb(255,255,255;border-radius:14px)}"
                                  "QPushButton:hover{border:0px;background:rgb(244,244,244);border-radius}"
                                  "QPushButton:clecked{color:rgb(255,255,255);background:rgb(187,187,187);border-radius:14px}"
                                  );
    
    //通知按钮
    ui->ptnInform->setParent(ui->widGroupBut);
    ui->ptnInform->setGeometry(0,1,55,28);
    ui->ptnInform->move(256,1);
    ui->ptnInform->setCheckable(true);
    ui->ptnInform->setStyleSheet("QPushButton{color:rgb(55,55,55);border:0px;background:rgb(255,255,255;border-radius:14px)}"
                                  "QPushButton:hover{border:0px;background:rgb(244,244,244);border-radius}"
                                  "QPushButton:clecked{color:rgb(255,255,255);background:rgb(187,187,187);border-radius:14px}"
                                  );
    
    QButtonGroup * btnGroup = new QButtonGroup(this);
    btnGroup->addButton(ui->ptnPer,0);
    btnGroup->addButton(ui->ptnComment,1);
    btnGroup->addButton(ui->ptnMe,2);
    btnGroup->addButton(ui->ptnInform,3);
    btnGroup->setExclusive(true);
    btnGroup->button(0)->setChecked(true);
    
    //连接槽
    connect(btnGroup,QOverload<int>::of(&QButtonGroup::buttonClicked),
            [=](int id){
        setMessageId(id);  
    }
    );
}

//留存接口
void MessageForm::setMessageId(int id)
{
    switch (id)
    {
        default:
            break;
    
    }
}

void MessageForm::setListMessage()
{
    QStringList pictureList;
    for(int i = 0; i<11; i++)
    {
        QString str = QString::asprintf(":/images/message/%d.jpg",i);
        pictureList.append(str);
    }
    QVector<bool> flog = {true,false,false,false,false,false,false,false,false,false,false};
    QStringList perNamelist = {"hanakami", "腾化饼干","婷心酱","古风作曲人",
                               "福利云", "罗小黑","大花","花花","非曲小助手",
                                "吴花花","XT"};
    QStringList Timerlist = {"2021年10月3日","2021年9月15日","2021年9月4日","2021年6月3日",
                             "2021年4月24日","2021年4月12日","2021年3月27日","2021年3月10日",
                             "2021年2月18日","2021年2月5日","2021年1月1日"};
    QStringList MessageInForm = {"你好",
                                 "快点吃饭！吴傻逼",
                                 "我爱你",
                                 "我新上传了一首歌",
                                 "客观，您有新福利",
                                 "马大哈出没",
                                 "想你",
                                 "你好 英雄",
                                 "有新的非遗曲目等您收听",
                                 "你好，骑士",
                                 "想你，老公"
                                };
    for(int i= 0;i<11;i++)
    {
        QListWidgetItem * item = new QListWidgetItem(ui->listMessage);
        MessageItem *messageitem = new MessageItem();
        messageitem->setRed(flog[i]);
        messageitem->setStringPic(pictureList[i]);
        messageitem->setName(perNamelist[i]);
        messageitem->setTime(Timerlist[i]);
        messageitem->setInformMessage(MessageInForm[i]);
        ui->listMessage->setItemWidget(item,messageitem);
    }

}

MessageForm::~MessageForm()
{
    delete ui;
}

void MessageForm::leaveEvent(QEvent *event)
{
    Q_UNUSED(event);
    this->close();
}
