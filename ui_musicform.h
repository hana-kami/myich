/********************************************************************************
** Form generated from reading UI file 'musicform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICFORM_H
#define UI_MUSICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicForm
{
public:
    QPushButton *ptnGetMusic;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labMName;
    QPushButton *pushButton;
    QLabel *labMuAuthor;

    void setupUi(QWidget *MusicForm)
    {
        if (MusicForm->objectName().isEmpty())
            MusicForm->setObjectName(QStringLiteral("MusicForm"));
        MusicForm->resize(255, 69);
        ptnGetMusic = new QPushButton(MusicForm);
        ptnGetMusic->setObjectName(QStringLiteral("ptnGetMusic"));
        ptnGetMusic->setGeometry(QRect(10, 10, 51, 51));
        ptnGetMusic->setMinimumSize(QSize(51, 51));
        ptnGetMusic->setMaximumSize(QSize(51, 51));
        gridLayoutWidget = new QWidget(MusicForm);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 10, 181, 53));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labMName = new QLabel(gridLayoutWidget);
        labMName->setObjectName(QStringLiteral("labMName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labMName->sizePolicy().hasHeightForWidth());
        labMName->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(10);
        labMName->setFont(font);

        gridLayout->addWidget(labMName, 2, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(19, 22));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        labMuAuthor = new QLabel(gridLayoutWidget);
        labMuAuthor->setObjectName(QStringLiteral("labMuAuthor"));
        sizePolicy.setHeightForWidth(labMuAuthor->sizePolicy().hasHeightForWidth());
        labMuAuthor->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        labMuAuthor->setFont(font1);

        gridLayout->addWidget(labMuAuthor, 3, 0, 1, 1);


        retranslateUi(MusicForm);

        QMetaObject::connectSlotsByName(MusicForm);
    } // setupUi

    void retranslateUi(QWidget *MusicForm)
    {
        MusicForm->setWindowTitle(QApplication::translate("MusicForm", "Form", Q_NULLPTR));
        ptnGetMusic->setText(QString());
        labMName->setText(QApplication::translate("MusicForm", "1", Q_NULLPTR));
        pushButton->setText(QString());
        labMuAuthor->setText(QApplication::translate("MusicForm", "2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicForm: public Ui_MusicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICFORM_H
