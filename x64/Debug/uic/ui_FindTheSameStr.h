/********************************************************************************
** Form generated from reading UI file 'FindTheSameStr.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTHESAMESTR_H
#define UI_FINDTHESAMESTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindTheSameStrClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QMainWindow *FindTheSameStrClass)
    {
        if (FindTheSameStrClass->objectName().isEmpty())
            FindTheSameStrClass->setObjectName(QStringLiteral("FindTheSameStrClass"));
        FindTheSameStrClass->resize(1041, 659);
        centralWidget = new QWidget(FindTheSameStrClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout->addWidget(textEdit_2);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout->addLayout(horizontalLayout);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setValue(11);

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(listWidget);

        verticalLayout->setStretch(0, 3);

        horizontalLayout_2->addLayout(verticalLayout);

        FindTheSameStrClass->setCentralWidget(centralWidget);

        retranslateUi(FindTheSameStrClass);

        QMetaObject::connectSlotsByName(FindTheSameStrClass);
    } // setupUi

    void retranslateUi(QMainWindow *FindTheSameStrClass)
    {
        FindTheSameStrClass->setWindowTitle(QApplication::translate("FindTheSameStrClass", "FindTheSameStr", nullptr));
        pushButton->setText(QApplication::translate("FindTheSameStrClass", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTheSameStrClass: public Ui_FindTheSameStrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTHESAMESTR_H
