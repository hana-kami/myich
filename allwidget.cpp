#include "allwidget.h"
#include "ui_allwidget.h"
#include "searchform.h"
#include <QDebug>


allWidget::allWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::allWidget)
{
    ui->setupUi(this);
    settabWidget();
    ui->line_Search->installEventFilter(this);
    ui->line_Search->setMouseTracking(true);
    //设置无边框
    this->setWindowFlags(Qt::FramelessWindowHint);
    searchForm = new SearchForm(); //创建一个新的搜索框
    searchForm->installEventFilter(this);
    searchForm->setMouseTracking(true);
    searchForm->hide();
    //初始化音乐
    setMusic();
    setListT1();
    setListT2();
    setListT3();
    setPictureWall();
    setMapButton();
    //设置左下角图片
    setMusicLeft();
}

void allWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    QPainter painter_mainback(this);
    painter_mainback.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/images/mainback.png"));
    ui->pushButton_people->setMask(QRegion(0,0,28,28,QRegion::Ellipse));
}


void allWidget::settabWidget()
{
    ui->tabWidget->setTabText(0,"个性推荐");
    ui->tabWidget->setTabText(1,"专属定制");
    ui->tabWidget->setTabText(2,"歌单");
    ui->tabWidget->setTabText(3,"排行榜");
}

void allWidget::mousePressEvent(QMouseEvent *event)
{
    //获取title widget 的高度，这里固定为60px
    int titleHeight = ui->title_Widget->height();
    if(event->y() <titleHeight)
    {
        last = event->globalPos(); //获取到按压的位置
    }
}

void allWidget::mouseMoveEvent(QMouseEvent *event)
{
    int titleHeight = ui->title_Widget->height();
    if(event->y() <titleHeight)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        last = event->globalPos();
        this->move(this->x()+dx,this->y()+dy);
    }

}

void allWidget::mouseReleaseEvent(QMouseEvent *event)
{
    int titleHeight = ui->title_Widget->height();
    if(event->y() <titleHeight)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        this->move(this->x()+dx,this->y()+dy);
    }
}

bool allWidget::eventFilter(QObject *watched, QEvent *event)
{
    //当点击查询按钮
    if(watched == ui->line_Search)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {

            int x = ui->line_Search->x();
            int y = ui->line_Search->y();
            int hight = ui->line_Search->height();
            searchForm->setGeometry(x-45+this->x(),y+hight+2+this->y(),searchForm->width(),searchForm->height());
            searchForm->show();
            return true;
        }
        else {
            return false;
        }

    }
    else if (watched == searchForm)
    {
        //当鼠标离开时候，界面隐藏
        if(event->type() == QEvent::Leave)
        {
            searchForm->hide();
            return true;
        }
        else {
            return false;
        }

    }

    return QWidget::eventFilter(watched,event);
}

void allWidget::setListT1()
{
    //把滚动条给取消掉 垂直与水平
    ui->listT1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem *findMusic = new QListWidgetItem(ui->listT1);
    findMusic->setIcon(QIcon(":/images/diantai.png"));
    findMusic->setText("发现音乐");
    QListWidgetItem *podcast = new QListWidgetItem(ui->listT1);
    podcast->setIcon(QIcon(":/images/fm.png"));
    podcast->setText("播客");
    QListWidgetItem *video = new QListWidgetItem(ui->listT1);
    video->setIcon(QIcon(":/images/video.png"));
    video->setText("视频");
    QListWidgetItem *friends = new QListWidgetItem(ui->listT1);
    friends->setIcon(QIcon(":/images/friend.png"));
    friends->setText("朋友");
    QListWidgetItem *live = new QListWidgetItem(ui->listT1);
    live->setIcon(QIcon(":/images/心动.png"));
    live->setText("直播");
    QListWidgetItem *pcFM = new QListWidgetItem(ui->listT1);
    pcFM->setIcon(QIcon(":/images/收藏.png"));
    pcFM->setText("收藏");
}

void allWidget::setListT2()
{
    //把滚动条给取消掉 垂直与水平
    ui->listT2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QListWidgetItem *Mylike = new QListWidgetItem(ui->listT2);
    Mylike->setIcon(QIcon(":/images/xin.png"));
    Mylike->setText("我喜欢");

    QListWidgetItem *Load = new QListWidgetItem(ui->listT2);
    Load->setIcon(QIcon(":/images/下载.png"));
    Load->setText("本地与下载");

    QListWidgetItem *Replayed = new QListWidgetItem(ui->listT2);
    Replayed->setIcon(QIcon(":/images/musiclist.png"));
    Replayed->setText("最近播放");

    QListWidgetItem *Purmusic = new QListWidgetItem(ui->listT2);
    Purmusic->setIcon(QIcon(":/images/music_1.png"));
    Purmusic->setText("已购音乐");
}

void allWidget::setListT3()
{
    ui->listT3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listT3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem *nihong = new QListWidgetItem(ui->listT3);
    nihong->setText("专属歌单");
}


//播放音乐功能
void allWidget::setMusic()
{
    player = new QMediaPlayer;
    playlist = new QMediaPlaylist;
    playlist->setPlaybackMode(QMediaPlaylist::Loop);//设置循环模式
    player->setPlaylist(playlist);
    connect(player,&QMediaPlayer::positionChanged,[=](qint64 duration){
        if(ui->horizontalSlider_music->isSliderDown())
        {
            return;
        }
        ui->horizontalSlider_music->blockSignals(true);
        ui->horizontalSlider_music->setSliderPosition(int(duration));
        ui->horizontalSlider_music->blockSignals(false);
        int secs = int(duration)/1000;
        int min = secs/60; //取整
        secs = secs%60; //剩余秒
        positionTime = QString::asprintf("%d:%d",min,secs);
        ui->label_time->setText(positionTime);
    });
    connect(player,&QMediaPlayer::durationChanged,[=](qint64 duration){
                 ui->horizontalSlider_music->setMaximum(int(duration));
                 int secs = int(duration)/1000;
                 int min = secs/60; //取整
                 secs = secs%60; //剩余秒
                 durationTime = QString::asprintf("%d:%d",min,secs);
                 ui->label_time_long->setText(durationTime);
    });
    //加载音乐
    playlist->addMedia(QUrl::fromLocalFile("./music/music.mp3"));
    //playlist->addMedia(QUrl::fromLocalFile("C:/Users/86134/Desktop/QT/myich/music/music.mp3"));
    //playlist->addMedia(QUrl::fromLocalFile("qrc:/images/music.mp3"));
    playlist->setCurrentIndex(0);
}

void allWidget::setPictureWall()
{
    pictureWidget = new PictureWidget();
    ui->carouselLay->addWidget(pictureWidget);
}

void allWidget::setMapButton()
{
    pButtonMus = new QButtonGroup;
    pButtonMus->addButton(ui->ptn_1,0);
    pButtonMus->addButton(ui->ptn_2,1);
    pButtonMus->addButton(ui->ptn_3,2);
    pButtonMus->addButton(ui->ptn_4,3);
    pButtonMus->addButton(ui->ptn_5,4);
    pButtonMus->setExclusive(true);//设置按钮互斥
    pButtonMus->button(0)->setChecked(true);
    connect(pButtonMus,QOverload<int>::of(&QButtonGroup::buttonClicked),
            [=](int id)
            {
                setIdMap(id);
            }
            );

}

void allWidget::setIdMap(int id)
{
    QString str = pButtonMus->button(id)->text();
    ui->ptn_change->setText(str+">");
    switch (id) {
    case 0:
    {
        QList<QString> arrShandong;
        for(int i = 0;i<5;i++)
        {
            arrShandong.append(QString::asprintf(":/images/pictureMusic/huayu%d.png",i));
        }
        QString style = "QWidget#picTitle{border-image:url("+arrShandong[0]+");}";
        ui->picTitle->setStyleSheet(style);
        style = "QWidget#widMus1{border-image:url("+arrShandong[1]+");}";
        ui->widMus1->setStyleSheet(style);
        style = "QWidget#widMus2{border-image:url("+arrShandong[2]+");}";
        ui->widMus2->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrShandong[3]+")}";
        ui->widMus3->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrShandong[3]+")}";
        ui->widMus4->setStyleSheet(style);
        //测试
        //QList<QString>::iterator it1 = arrShandong.begin();

//        for(;it1 != arrShandong.end();++it1)
//        {
//            qDebug() << *it1;
//        }
        break;
     }
    case 1:
    {
        QList<QString> arrGuangdong;
        for(int i = 0;i<5;i++)
        {
            arrGuangdong.append(QString::asprintf(":/images/pictureMusic/liuxing%d.png",i));
        }
        QString style = "QWidget#picTitle{border-image:url("+arrGuangdong[0]+");}";
        ui->picTitle->setStyleSheet(style);
        style = "QWidget#widMus1{border-image:url("+arrGuangdong[1]+");}";
        ui->widMus1->setStyleSheet(style);
        style = "QWidget#widMus2{border-image:url("+arrGuangdong[2]+");}";
        ui->widMus2->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrGuangdong[3]+")}";
        ui->widMus3->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrGuangdong[3]+")}";
        ui->widMus4->setStyleSheet(style);
        //测试
        //QList<QString>::iterator it1 = arrShandong.begin();

//        for(;it1 != arrShandong.end();++it1)
//        {
//            qDebug() << *it1;
//        }
        break;
     }
    case 2:
    {
        QList<QString> arrFujian;
        for(int i = 0;i<5;i++)
        {
            arrFujian.append(QString::asprintf(":/images/pictureMusic/yaogun%d.png",i));
        }
        QString style = "QWidget#picTitle{border-image:url("+arrFujian[0]+");}";
        ui->picTitle->setStyleSheet(style);
        style = "QWidget#widMus1{border-image:url("+arrFujian[1]+");}";
        ui->widMus1->setStyleSheet(style);
        style = "QWidget#widMus2{border-image:url("+arrFujian[2]+");}";
        ui->widMus2->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrFujian[3]+")}";
        ui->widMus3->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrFujian[3]+")}";
        ui->widMus4->setStyleSheet(style);
        //测试
        //QList<QString>::iterator it1 = arrShandong.begin();

//        for(;it1 != arrShandong.end();++it1)
//        {
//            qDebug() << *it1;
//        }
        break;
     }
    case 3:
    {
        QList<QString> arrZhejiang;
        for(int i = 0;i<5;i++)
        {
            arrZhejiang.append(QString::asprintf(":/images/pictureMusic/minyao%d.png",i));
        }
        QString style = "QWidget#picTitle{border-image:url("+arrZhejiang[0]+");}";
        ui->picTitle->setStyleSheet(style);
        style = "QWidget#widMus1{border-image:url("+arrZhejiang[1]+");}";
        ui->widMus1->setStyleSheet(style);
        style = "QWidget#widMus2{border-image:url("+arrZhejiang[2]+");}";
        ui->widMus2->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrZhejiang[3]+")}";
        ui->widMus3->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrZhejiang[3]+")}";
        ui->widMus4->setStyleSheet(style);
        //测试
        //QList<QString>::iterator it1 = arrShandong.begin();

//        for(;it1 != arrShandong.end();++it1)
//        {
//            qDebug() << *it1;
//        }
        break;
     }
    case 4:
    {
        QList<QString> arrXinjiang;
        for(int i = 0;i<5;i++)
        {
            arrXinjiang.append(QString::asprintf(":/images/pictureMusic/dianzi%d.png",i));
        }
        QString style = "QWidget#picTitle{border-image:url("+arrXinjiang[0]+");}";
        ui->picTitle->setStyleSheet(style);
        style = "QWidget#widMus1{border-image:url("+arrXinjiang[1]+");}";
        ui->widMus1->setStyleSheet(style);
        style = "QWidget#widMus2{border-image:url("+arrXinjiang[2]+");}";
        ui->widMus2->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrXinjiang[3]+")}";
        ui->widMus3->setStyleSheet(style);
        style = "Qwidget#widMus3{border-image:url("+arrXinjiang[3]+")}";
        ui->widMus4->setStyleSheet(style);
        //测试
        //QList<QString>::iterator it1 = arrShandong.begin();

//        for(;it1 != arrShandong.end();++it1)
//        {
//            qDebug() << *it1;
//        }
        break;
     }
    }
}

void allWidget::setMusicLeft()
{
    MusicForm *musicForm = new MusicForm();
    musicForm->setMusicName("Shadow Of The Sun");
    musicForm->setMusicAuthor("Max Elto");
    musicForm->setMusicPicture(":/images/ShadowoftheSun.png");
    ui->verticalLayout->addWidget(musicForm);
}


allWidget::~allWidget()
{
    delete ui;
}

void allWidget::on_pushButton_close_clicked()
{
    this->close();
}

void allWidget::on_pushButton_hide_clicked()
{
    this->showMinimized();
}

void allWidget::on_pushButton_max_clicked()
{
    this->showMaximized();
}

void allWidget::on_horizontalSlider_music_valueChanged(int value)
{
    player->blockSignals(true);
    player->setPosition(value);
    player->blockSignals(false);
}

void allWidget::on_pushButton_stop_clicked(bool checked)
{
    if(checked)
        {
            player->play();
            this->setWindowTitle("Shadow of The Sun");
        }
        else {
            player->pause();
        }
}
//邮件消息
void allWidget::on_pushButton_message_clicked()
{
    if(pMessageForm)
    {
        if(pMessageForm->isHidden())
        {
            pMessageForm->show();
        }
        else {
            pMessageForm->hide();
        }

    }
    else {
        pMessageForm = new MessageForm(this);
        pMessageForm->setMouseTracking(true);
        pMessageForm->setGeometry(630,60,365,565); //这里要调整好
        pMessageForm->raise();  //提示显示层数
        pMessageForm->show();
    }
}
