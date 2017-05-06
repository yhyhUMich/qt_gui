/********************************************************************************
** Form generated from reading UI file 'QtGui_test.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUI_TEST_H
#define UI_QTGUI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGui_testClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGui_testClass)
    {
        if (QtGui_testClass->objectName().isEmpty())
            QtGui_testClass->setObjectName(QStringLiteral("QtGui_testClass"));
        QtGui_testClass->resize(280, 128);
        centralWidget = new QWidget(QtGui_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        QtGui_testClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGui_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 280, 21));
        QtGui_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGui_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGui_testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGui_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGui_testClass->setStatusBar(statusBar);

        retranslateUi(QtGui_testClass);

        QMetaObject::connectSlotsByName(QtGui_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGui_testClass)
    {
        QtGui_testClass->setWindowTitle(QApplication::translate("QtGui_testClass", "QtGui_test", Q_NULLPTR));
        label->setText(QApplication::translate("QtGui_testClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGui_testClass: public Ui_QtGui_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUI_TEST_H
