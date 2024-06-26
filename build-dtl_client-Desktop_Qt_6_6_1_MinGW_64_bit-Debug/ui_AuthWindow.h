/********************************************************************************
** Form generated from reading UI file 'AuthWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ChangeModeLabel;
    QPushButton *ChangeModeButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget_3;
    QHBoxLayout *LoginPasswordLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *EmailLabel;
    QLabel *LoginLabel;
    QLabel *PasswordLabel;
    QLabel *passwordLabel_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *EmailTextEdit;
    QLineEdit *LoginTextEdit;
    QLineEdit *PasswordTextEdit;
    QLineEdit *passwordTextEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(707, 466);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(85, 127, 127, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(246, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush9);
        AuthWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        AuthWindow->setFont(font);
        centralwidget = new QWidget(AuthWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 571, 51));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(170, 170, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush11(QColor(212, 212, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(85, 85, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(113, 113, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(85, 85, 127, 127));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 10, 571, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_2->setPalette(palette2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(20);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 320, 505, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ChangeModeLabel = new QLabel(layoutWidget);
        ChangeModeLabel->setObjectName("ChangeModeLabel");
        ChangeModeLabel->setFont(font);

        horizontalLayout_2->addWidget(ChangeModeLabel);

        ChangeModeButton = new QPushButton(layoutWidget);
        ChangeModeButton->setObjectName("ChangeModeButton");
        ChangeModeButton->setFont(font);
        ChangeModeButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("computer")));
        ChangeModeButton->setIcon(icon);
        ChangeModeButton->setFlat(true);

        horizontalLayout_2->addWidget(ChangeModeButton);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(100, 68, 507, 274));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName("layoutWidget_3");
        LoginPasswordLayout = new QHBoxLayout(layoutWidget_3);
        LoginPasswordLayout->setObjectName("LoginPasswordLayout");
        LoginPasswordLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        EmailLabel = new QLabel(layoutWidget_3);
        EmailLabel->setObjectName("EmailLabel");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(22);
        EmailLabel->setFont(font3);
        EmailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(EmailLabel);

        LoginLabel = new QLabel(layoutWidget_3);
        LoginLabel->setObjectName("LoginLabel");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Agency FB")});
        font4.setPointSize(18);
        LoginLabel->setFont(font4);
        LoginLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(LoginLabel);

        PasswordLabel = new QLabel(layoutWidget_3);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setFont(font4);
        PasswordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(PasswordLabel);

        passwordLabel_2 = new QLabel(layoutWidget_3);
        passwordLabel_2->setObjectName("passwordLabel_2");
        passwordLabel_2->setFont(font4);
        passwordLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(passwordLabel_2);


        LoginPasswordLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        EmailTextEdit = new QLineEdit(layoutWidget_3);
        EmailTextEdit->setObjectName("EmailTextEdit");
        EmailTextEdit->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(EmailTextEdit);

        LoginTextEdit = new QLineEdit(layoutWidget_3);
        LoginTextEdit->setObjectName("LoginTextEdit");
        LoginTextEdit->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(LoginTextEdit);

        PasswordTextEdit = new QLineEdit(layoutWidget_3);
        PasswordTextEdit->setObjectName("PasswordTextEdit");
        PasswordTextEdit->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(PasswordTextEdit);

        passwordTextEdit_2 = new QLineEdit(layoutWidget_3);
        passwordTextEdit_2->setObjectName("passwordTextEdit_2");
        passwordTextEdit_2->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(passwordTextEdit_2);


        LoginPasswordLayout->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget_3);

        verticalLayout_3->addWidget(splitter);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 370, 505, 28));
        pushButton->setFont(font);
        AuthWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuthWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 707, 23));
        AuthWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AuthWindow);
        statusbar->setObjectName("statusbar");
        AuthWindow->setStatusBar(statusbar);

        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("AuthWindow", "Q&A", nullptr));
        ChangeModeLabel->setText(QCoreApplication::translate("AuthWindow", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260? ", nullptr));
        ChangeModeButton->setText(QCoreApplication::translate("AuthWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214", nullptr));
        EmailLabel->setText(QCoreApplication::translate("AuthWindow", "Email:", nullptr));
        LoginLabel->setText(QCoreApplication::translate("AuthWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("AuthWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("AuthWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton->setText(QCoreApplication::translate("AuthWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
