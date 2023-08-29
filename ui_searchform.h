/********************************************************************************
** Form generated from reading UI file 'searchform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORM_H
#define UI_SEARCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchForm
{
public:
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QWidget *SearchForm)
    {
        if (SearchForm->objectName().isEmpty())
            SearchForm->setObjectName(QStringLiteral("SearchForm"));
        SearchForm->resize(365, 396);
        listWidget = new QListWidget(SearchForm);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(2, 33, 360, 360));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(16777215, 375));
        label = new QLabel(SearchForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 61, 21));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        label->setFont(font);

        retranslateUi(SearchForm);

        QMetaObject::connectSlotsByName(SearchForm);
    } // setupUi

    void retranslateUi(QWidget *SearchForm)
    {
        SearchForm->setWindowTitle(QApplication::translate("SearchForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SearchForm", "\347\203\255\346\220\234\346\246\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchForm: public Ui_SearchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORM_H
