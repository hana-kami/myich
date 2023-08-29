/********************************************************************************
** Form generated from reading UI file 'messageform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEFORM_H
#define UI_MESSAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageForm
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labMess;
    QSpacerItem *horizontalSpacer;
    QLabel *labRead;
    QWidget *widGroupBut;
    QPushButton *ptnPer;
    QPushButton *ptnComment;
    QPushButton *ptnMe;
    QPushButton *ptnInform;
    QListWidget *listMessage;

    void setupUi(QWidget *MessageForm)
    {
        if (MessageForm->objectName().isEmpty())
            MessageForm->setObjectName(QStringLiteral("MessageForm"));
        MessageForm->resize(384, 573);
        layoutWidget = new QWidget(MessageForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 331, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labMess = new QLabel(layoutWidget);
        labMess->setObjectName(QStringLiteral("labMess"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(14);
        labMess->setFont(font);

        horizontalLayout->addWidget(labMess);

        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labRead = new QLabel(layoutWidget);
        labRead->setObjectName(QStringLiteral("labRead"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        labRead->setFont(font1);

        horizontalLayout->addWidget(labRead);

        widGroupBut = new QWidget(MessageForm);
        widGroupBut->setObjectName(QStringLiteral("widGroupBut"));
        widGroupBut->setGeometry(QRect(20, 60, 341, 41));
        ptnPer = new QPushButton(widGroupBut);
        ptnPer->setObjectName(QStringLiteral("ptnPer"));
        ptnPer->setGeometry(QRect(10, 0, 61, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI"));
        ptnPer->setFont(font2);
        ptnComment = new QPushButton(widGroupBut);
        ptnComment->setObjectName(QStringLiteral("ptnComment"));
        ptnComment->setGeometry(QRect(90, 0, 61, 31));
        ptnComment->setFont(font2);
        ptnMe = new QPushButton(widGroupBut);
        ptnMe->setObjectName(QStringLiteral("ptnMe"));
        ptnMe->setGeometry(QRect(170, 0, 61, 31));
        ptnMe->setFont(font2);
        ptnInform = new QPushButton(widGroupBut);
        ptnInform->setObjectName(QStringLiteral("ptnInform"));
        ptnInform->setGeometry(QRect(260, 0, 61, 31));
        ptnInform->setFont(font2);
        listMessage = new QListWidget(MessageForm);
        listMessage->setObjectName(QStringLiteral("listMessage"));
        listMessage->setGeometry(QRect(10, 100, 361, 471));
        layoutWidget->raise();
        widGroupBut->raise();
        listMessage->raise();

        retranslateUi(MessageForm);

        QMetaObject::connectSlotsByName(MessageForm);
    } // setupUi

    void retranslateUi(QWidget *MessageForm)
    {
        MessageForm->setWindowTitle(QApplication::translate("MessageForm", "Form", Q_NULLPTR));
        labMess->setText(QApplication::translate("MessageForm", "\346\266\210\346\201\257", Q_NULLPTR));
        labRead->setText(QApplication::translate("MessageForm", "\344\270\200\351\224\256\345\267\262\350\257\273", Q_NULLPTR));
        ptnPer->setText(QApplication::translate("MessageForm", "\347\247\201\344\277\241", Q_NULLPTR));
        ptnComment->setText(QApplication::translate("MessageForm", "\350\257\204\350\256\272", Q_NULLPTR));
        ptnMe->setText(QApplication::translate("MessageForm", "@\346\210\221", Q_NULLPTR));
        ptnInform->setText(QApplication::translate("MessageForm", "\351\200\232\347\237\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageForm: public Ui_MessageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEFORM_H
