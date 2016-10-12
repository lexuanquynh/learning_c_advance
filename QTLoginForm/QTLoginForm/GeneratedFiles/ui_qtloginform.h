/********************************************************************************
** Form generated from reading UI file 'qtloginform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLOGINFORM_H
#define UI_QTLOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTLoginFormClass
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *btnLogin;
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QLabel *label;
    QPushButton *btnSignup;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTLoginFormClass)
    {
        if (QTLoginFormClass->objectName().isEmpty())
            QTLoginFormClass->setObjectName(QStringLiteral("QTLoginFormClass"));
        QTLoginFormClass->resize(260, 460);
        QTLoginFormClass->setMinimumSize(QSize(260, 460));
        QTLoginFormClass->setMaximumSize(QSize(260, 460));
        actionAbout = new QAction(QTLoginFormClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(QTLoginFormClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(60, 180, 131, 31));
        txtUserName = new QLineEdit(centralWidget);
        txtUserName->setObjectName(QStringLiteral("txtUserName"));
        txtUserName->setGeometry(QRect(20, 80, 211, 21));
        txtUserName->setMaxLength(32767);
        txtPassword = new QLineEdit(centralWidget);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setGeometry(QRect(20, 130, 211, 21));
        txtPassword->setMaxLength(100);
        txtPassword->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 210, 121, 20));
        label->setAlignment(Qt::AlignCenter);
        label->setOpenExternalLinks(false);
        btnSignup = new QPushButton(centralWidget);
        btnSignup->setObjectName(QStringLiteral("btnSignup"));
        btnSignup->setGeometry(QRect(60, 240, 131, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 191, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setOpenExternalLinks(false);
        QTLoginFormClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTLoginFormClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 260, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        QTLoginFormClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTLoginFormClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTLoginFormClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTLoginFormClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTLoginFormClass->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());

        retranslateUi(QTLoginFormClass);

        QMetaObject::connectSlotsByName(QTLoginFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTLoginFormClass)
    {
        QTLoginFormClass->setWindowTitle(QApplication::translate("QTLoginFormClass", "\304\220\304\203ng nh\341\272\255p h\341\273\207 th\341\273\221ng", 0));
        actionAbout->setText(QApplication::translate("QTLoginFormClass", "About", 0));
        btnLogin->setText(QApplication::translate("QTLoginFormClass", "\304\220\304\203ng nh\341\272\255p", 0));
        txtUserName->setInputMask(QString());
        txtUserName->setPlaceholderText(QApplication::translate("QTLoginFormClass", "T\303\252n \304\221\304\203ng nh\341\272\255p", 0));
        txtPassword->setPlaceholderText(QApplication::translate("QTLoginFormClass", "M\341\272\255t kh\341\272\251u", 0));
        label->setText(QApplication::translate("QTLoginFormClass", "Ho\341\272\267c", 0));
        btnSignup->setText(QApplication::translate("QTLoginFormClass", "\304\220\304\203ng k\303\275", 0));
        label_2->setText(QApplication::translate("QTLoginFormClass", "\304\220\304\203ng nh\341\272\255p h\341\273\207 th\341\273\221ng", 0));
        menuMenu->setTitle(QApplication::translate("QTLoginFormClass", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class QTLoginFormClass: public Ui_QTLoginFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLOGINFORM_H
