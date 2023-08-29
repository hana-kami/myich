/********************************************************************************
** Form generated from reading UI file 'picturewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREWIDGET_H
#define UI_PICTUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <picturebutton.h>
#include "pictureview.h"

QT_BEGIN_NAMESPACE

class Ui_PictureWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    pictureView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    pictureButton *btnPic0;
    pictureButton *btnPic1;
    pictureButton *btnPic2;
    pictureButton *btnPic3;
    pictureButton *btnPic4;
    pictureButton *btnPic5;
    pictureButton *btnPic6;
    pictureButton *btnPic7;
    pictureButton *btnPic8;
    pictureButton *btnPic9;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnL;
    QPushButton *btnR;

    void setupUi(QWidget *PictureWidget)
    {
        if (PictureWidget->objectName().isEmpty())
            PictureWidget->setObjectName(QStringLiteral("PictureWidget"));
        PictureWidget->resize(762, 227);
        layoutWidget = new QWidget(PictureWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-1, -1, 761, 225));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new pictureView(layoutWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnPic0 = new pictureButton(layoutWidget);
        btnPic0->setObjectName(QStringLiteral("btnPic0"));

        horizontalLayout->addWidget(btnPic0);

        btnPic1 = new pictureButton(layoutWidget);
        btnPic1->setObjectName(QStringLiteral("btnPic1"));

        horizontalLayout->addWidget(btnPic1);

        btnPic2 = new pictureButton(layoutWidget);
        btnPic2->setObjectName(QStringLiteral("btnPic2"));

        horizontalLayout->addWidget(btnPic2);

        btnPic3 = new pictureButton(layoutWidget);
        btnPic3->setObjectName(QStringLiteral("btnPic3"));

        horizontalLayout->addWidget(btnPic3);

        btnPic4 = new pictureButton(layoutWidget);
        btnPic4->setObjectName(QStringLiteral("btnPic4"));

        horizontalLayout->addWidget(btnPic4);

        btnPic5 = new pictureButton(layoutWidget);
        btnPic5->setObjectName(QStringLiteral("btnPic5"));

        horizontalLayout->addWidget(btnPic5);

        btnPic6 = new pictureButton(layoutWidget);
        btnPic6->setObjectName(QStringLiteral("btnPic6"));

        horizontalLayout->addWidget(btnPic6);

        btnPic7 = new pictureButton(layoutWidget);
        btnPic7->setObjectName(QStringLiteral("btnPic7"));

        horizontalLayout->addWidget(btnPic7);

        btnPic8 = new pictureButton(layoutWidget);
        btnPic8->setObjectName(QStringLiteral("btnPic8"));

        horizontalLayout->addWidget(btnPic8);

        btnPic9 = new pictureButton(layoutWidget);
        btnPic9->setObjectName(QStringLiteral("btnPic9"));

        horizontalLayout->addWidget(btnPic9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        btnL = new QPushButton(PictureWidget);
        btnL->setObjectName(QStringLiteral("btnL"));
        btnL->setGeometry(QRect(20, 80, 25, 25));
        btnR = new QPushButton(PictureWidget);
        btnR->setObjectName(QStringLiteral("btnR"));
        btnR->setGeometry(QRect(710, 80, 25, 25));
        layoutWidget->raise();
        btnL->raise();
        btnR->raise();
        graphicsView->raise();

        retranslateUi(PictureWidget);

        QMetaObject::connectSlotsByName(PictureWidget);
    } // setupUi

    void retranslateUi(QWidget *PictureWidget)
    {
        PictureWidget->setWindowTitle(QApplication::translate("PictureWidget", "Form", Q_NULLPTR));
        btnL->setText(QString());
        btnR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PictureWidget: public Ui_PictureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREWIDGET_H
