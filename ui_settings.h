/********************************************************************************
** Form generated from reading ui file 'settings.ui'
**
** Created: Tue 5. Jan 15:43:46 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QVBoxLayout *verticalLayout_3;
    QRadioButton *local_radio;
    QGroupBox *local_box;
    QHBoxLayout *local_layout;
    QLabel *local_label;
    QLineEdit *local_edit;
    QToolButton *local_button;
    QSpacerItem *verticalSpacer;
    QRadioButton *remote_radio;
    QGroupBox *remote_box;
    QHBoxLayout *remote_layout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *remote_host_lbl;
    QLineEdit *remote_host_ed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *remote_base_lbl;
    QLineEdit *remote_base_ed;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *remote_login_lbl;
    QLineEdit *remote_login_ed;
    QHBoxLayout *horizontalLayout_3;
    QLabel *remote_passwd_lbl;
    QLineEdit *remote_passwd_ed;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *new_layout;
    QHBoxLayout *horizontalLayout;
    QLabel *new_lbl;
    QPushButton *new_btn;
    QHBoxLayout *buttons_layout;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(385, 263);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setMaximumSize(QSize(385, 263));
        verticalLayout_3 = new QVBoxLayout(settings);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        local_radio = new QRadioButton(settings);
        local_radio->setObjectName(QString::fromUtf8("local_radio"));

        verticalLayout_3->addWidget(local_radio);

        local_box = new QGroupBox(settings);
        local_box->setObjectName(QString::fromUtf8("local_box"));
        local_box->setFlat(false);
        local_box->setCheckable(false);
        local_box->setChecked(false);
        local_layout = new QHBoxLayout(local_box);
        local_layout->setObjectName(QString::fromUtf8("local_layout"));
        local_label = new QLabel(local_box);
        local_label->setObjectName(QString::fromUtf8("local_label"));

        local_layout->addWidget(local_label);

        local_edit = new QLineEdit(local_box);
        local_edit->setObjectName(QString::fromUtf8("local_edit"));

        local_layout->addWidget(local_edit);

        local_button = new QToolButton(local_box);
        local_button->setObjectName(QString::fromUtf8("local_button"));

        local_layout->addWidget(local_button);


        verticalLayout_3->addWidget(local_box);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        remote_radio = new QRadioButton(settings);
        remote_radio->setObjectName(QString::fromUtf8("remote_radio"));

        verticalLayout_3->addWidget(remote_radio);

        remote_box = new QGroupBox(settings);
        remote_box->setObjectName(QString::fromUtf8("remote_box"));
        remote_box->setFlat(false);
        remote_layout = new QHBoxLayout(remote_box);
        remote_layout->setObjectName(QString::fromUtf8("remote_layout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        remote_host_lbl = new QLabel(remote_box);
        remote_host_lbl->setObjectName(QString::fromUtf8("remote_host_lbl"));

        horizontalLayout_5->addWidget(remote_host_lbl);

        remote_host_ed = new QLineEdit(remote_box);
        remote_host_ed->setObjectName(QString::fromUtf8("remote_host_ed"));

        horizontalLayout_5->addWidget(remote_host_ed);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        remote_base_lbl = new QLabel(remote_box);
        remote_base_lbl->setObjectName(QString::fromUtf8("remote_base_lbl"));

        horizontalLayout_4->addWidget(remote_base_lbl);

        remote_base_ed = new QLineEdit(remote_box);
        remote_base_ed->setObjectName(QString::fromUtf8("remote_base_ed"));

        horizontalLayout_4->addWidget(remote_base_ed);


        verticalLayout_2->addLayout(horizontalLayout_4);


        remote_layout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        remote_login_lbl = new QLabel(remote_box);
        remote_login_lbl->setObjectName(QString::fromUtf8("remote_login_lbl"));

        horizontalLayout_2->addWidget(remote_login_lbl);

        remote_login_ed = new QLineEdit(remote_box);
        remote_login_ed->setObjectName(QString::fromUtf8("remote_login_ed"));

        horizontalLayout_2->addWidget(remote_login_ed);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        remote_passwd_lbl = new QLabel(remote_box);
        remote_passwd_lbl->setObjectName(QString::fromUtf8("remote_passwd_lbl"));

        horizontalLayout_3->addWidget(remote_passwd_lbl);

        remote_passwd_ed = new QLineEdit(remote_box);
        remote_passwd_ed->setObjectName(QString::fromUtf8("remote_passwd_ed"));

        horizontalLayout_3->addWidget(remote_passwd_ed);


        verticalLayout->addLayout(horizontalLayout_3);


        remote_layout->addLayout(verticalLayout);


        verticalLayout_3->addWidget(remote_box);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        new_layout = new QGroupBox(settings);
        new_layout->setObjectName(QString::fromUtf8("new_layout"));
        new_layout->setEnabled(true);
        horizontalLayout = new QHBoxLayout(new_layout);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        new_lbl = new QLabel(new_layout);
        new_lbl->setObjectName(QString::fromUtf8("new_lbl"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(112, 111, 113, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        new_lbl->setPalette(palette);
        new_lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(new_lbl);

        new_btn = new QPushButton(new_layout);
        new_btn->setObjectName(QString::fromUtf8("new_btn"));

        horizontalLayout->addWidget(new_btn);


        verticalLayout_3->addWidget(new_layout);

        buttons_layout = new QHBoxLayout();
        buttons_layout->setObjectName(QString::fromUtf8("buttons_layout"));
        OK = new QPushButton(settings);
        OK->setObjectName(QString::fromUtf8("OK"));

        buttons_layout->addWidget(OK);

        Cancel = new QPushButton(settings);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        buttons_layout->addWidget(Cancel);


        verticalLayout_3->addLayout(buttons_layout);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Settings", 0, QApplication::UnicodeUTF8));
        local_radio->setText(QApplication::translate("settings", "Local DB (SQLite)", 0, QApplication::UnicodeUTF8));
        local_label->setText(QApplication::translate("settings", "File location (*.sqlite)", 0, QApplication::UnicodeUTF8));
        local_button->setText(QApplication::translate("settings", "...", 0, QApplication::UnicodeUTF8));
        remote_radio->setText(QApplication::translate("settings", "Remote DB (MySQL)", 0, QApplication::UnicodeUTF8));
        remote_host_lbl->setText(QApplication::translate("settings", "Host", 0, QApplication::UnicodeUTF8));
        remote_base_lbl->setText(QApplication::translate("settings", "DataBase", 0, QApplication::UnicodeUTF8));
        remote_login_lbl->setText(QApplication::translate("settings", "Login", 0, QApplication::UnicodeUTF8));
        remote_passwd_lbl->setText(QApplication::translate("settings", "Password", 0, QApplication::UnicodeUTF8));
        new_layout->setTitle(QApplication::translate("settings", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\261\320\260\320\267\321\203", 0, QApplication::UnicodeUTF8));
        new_lbl->setText(QApplication::translate("settings", "\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265! \320\237\321\200\320\270 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\320\270 \320\275\320\276\320\262\320\276\320\271 \320\261\320\260\320\267\321\213 \321\203\320\261\320\265\320\264\320\270\321\202\320\265\321\201\321\214,\n"
"\321\207\321\202\320\276 \320\262\320\262\320\265\320\264\320\265\320\275\320\276\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \320\270\320\273\320\270 \321\204\320\260\320\271\320\273\320\260 \320\275\320\265 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\320\265\321\202!", 0, QApplication::UnicodeUTF8));
        new_btn->setText(QApplication::translate("settings", "Create", 0, QApplication::UnicodeUTF8));
        OK->setText(QApplication::translate("settings", "OK", 0, QApplication::UnicodeUTF8));
        Cancel->setText(QApplication::translate("settings", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(settings);
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
