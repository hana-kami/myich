/********************************************************************************
** Form generated from reading UI file 'messageitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEITEM_H
#define UI_MESSAGEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageItem
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labred;
    QWidget *widPicturePer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labNameMess;
    QSpacerItem *horizontalSpacer;
    QLabel *labTimer;
    QLabel *labInform;

    void setupUi(QWidget *MessageItem)
    {
        if (MessageItem->objectName().isEmpty())
            MessageItem->setObjectName(QStringLiteral("MessageItem"));
        MessageItem->resize(358, 56);
        layoutWidget = new QWidget(MessageItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 351, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labred = new QLabel(layoutWidget);
        labred->setObjectName(QStringLiteral("labred"));
        labred->setMinimumSize(QSize(10, 10));
        labred->setMaximumSize(QSize(10, 10));

        horizontalLayout->addWidget(labred);

        widPicturePer = new QWidget(layoutWidget);
        widPicturePer->setObjectName(QStringLiteral("widPicturePer"));
        widPicturePer->setMinimumSize(QSize(40, 40));
        widPicturePer->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(widPicturePer);


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labNameMess = new QLabel(layoutWidget);
        labNameMess->setObjectName(QStringLiteral("labNameMess"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(10);
        labNameMess->setFont(font);

        horizontalLayout_2->addWidget(labNameMess);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labTimer = new QLabel(layoutWidget);
        labTimer->setObjectName(QStringLiteral("labTimer"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        labTimer->setFont(font1);
        labTimer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labTimer);


        verticalLayout_5->addLayout(horizontalLayout_2);

        labInform = new QLabel(layoutWidget);
        labInform->setObjectName(QStringLiteral("labInform"));
        labInform->setFont(font1);

        verticalLayout_5->addWidget(labInform);


        horizontalLayout_3->addLayout(verticalLayout_5);

        layoutWidget->raise();
        labTimer->raise();

        retranslateUi(MessageItem);

        QMetaObject::connectSlotsByName(MessageItem);
    } // setupUi

    void retranslateUi(QWidget *MessageItem)
    {
        MessageItem->setWindowTitle(QApplication::translate("MessageItem", "Form", Q_NULLPTR));
        labred->setText(QString());
        labNameMess->setText(QApplication::translate("MessageItem", "name1", Q_NULLPTR));
        labTimer->setText(QApplication::translate("MessageItem", "time", Q_NULLPTR));
        labInform->setText(QApplication::translate("MessageItem", "inform", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MessageItem: public Ui_MessageItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEITEM_H
