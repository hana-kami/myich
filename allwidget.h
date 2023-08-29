#ifndef ALLWIDGET_H
#define ALLWIDGET_H

#include <QWidget>
#include "searchform.h"
#include "picturewidget.h"
#include "musicform.h"
#include "messageform.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMouseEvent>
#include <QButtonGroup>
#include <QPainter>

namespace Ui {
class allWidget;
}

class allWidget : public QWidget
{
    Q_OBJECT

public:
    explicit allWidget(QWidget *parent = 0);
    void settabWidget();
    void setListT1();
    void setListT2();
    void setListT3();
    void setMusic();
    void setPictureWall();//轮播图片
    void setMapButton();//设置图片按钮组
    void setIdMap(int id);
    void setMusicLeft();
    //绘制背景函数
    void paintEvent(QPaintEvent* event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    ~allWidget();

protected:
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_pushButton_close_clicked();

    void on_pushButton_hide_clicked();

    void on_pushButton_max_clicked();

    void on_horizontalSlider_music_valueChanged(int value);

    void on_pushButton_stop_clicked(bool checked);

    void on_pushButton_message_clicked();

private:
    Ui::allWidget *ui;
    QPoint last;
    SearchForm * searchForm;  //搜索框
    //播放音乐部分
    QMediaPlayer    *player;//播放器
    QMediaPlaylist  *playlist;//播放列表
    QString  durationTime;//总长度
    QString  positionTime;//当前播放到位置
    //轮播图片
    PictureWidget * pictureWidget;    //图片墙
    QButtonGroup * pButtonMus; //音乐组的
    //个人消息
    MessageForm * pMessageForm = nullptr;
};

#endif // ALLWIDGET_H
