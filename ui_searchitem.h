/********************************************************************************
** Form generated from reading UI file 'searchitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHITEM_H
#define UI_SEARCHITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchItem
{
public:
    QLabel *lab_ranking;
    QLabel *lab_num;
    QLabel *lab_name;
    QLabel *lab_message;

    void setupUi(QWidget *SearchItem)
    {
        if (SearchItem->objectName().isEmpty())
            SearchItem->setObjectName(QStringLiteral("SearchItem"));
        SearchItem->resize(328, 65);
        lab_ranking = new QLabel(SearchItem);
        lab_ranking->setObjectName(QStringLiteral("lab_ranking"));
        lab_ranking->setGeometry(QRect(158, 11, 42, 16));
        lab_num = new QLabel(SearchItem);
        lab_num->setObjectName(QStringLiteral("lab_num"));
        lab_num->setGeometry(QRect(0, 0, 61, 61));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei Light"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lab_num->setFont(font);
        lab_num->setAlignment(Qt::AlignCenter);
        lab_name = new QLabel(SearchItem);
        lab_name->setObjectName(QStringLiteral("lab_name"));
        lab_name->setGeometry(QRect(71, 11, 81, 17));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_name->sizePolicy().hasHeightForWidth());
        lab_name->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font1.setBold(true);
        font1.setWeight(75);
        lab_name->setFont(font1);
        lab_message = new QLabel(SearchItem);
        lab_message->setObjectName(QStringLiteral("lab_message"));
        lab_message->setGeometry(QRect(70, 30, 271, 16));

        retranslateUi(SearchItem);

        QMetaObject::connectSlotsByName(SearchItem);
    } // setupUi

    void retranslateUi(QWidget *SearchItem)
    {
        SearchItem->setWindowTitle(QApplication::translate("SearchItem", "Form", Q_NULLPTR));
        lab_ranking->setText(QApplication::translate("SearchItem", "1245321", Q_NULLPTR));
        lab_num->setText(QApplication::translate("SearchItem", "1", Q_NULLPTR));
        lab_name->setText(QApplication::translate("SearchItem", "\345\226\234\346\254\242\347\232\204\346\255\214", Q_NULLPTR));
        lab_message->setText(QApplication::translate("SearchItem", "\346\235\245\350\207\252\345\217\244\351\243\216\346\255\214\346\233\262", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchItem: public Ui_SearchItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHITEM_H
