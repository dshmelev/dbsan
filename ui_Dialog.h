/********************************************************************************
** Form generated from reading ui file 'Dialog.ui'
**
** Created: Tue 5. Jan 14:44:34 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *ed_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *ed_user;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *ed_organization;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *ed_site;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *ed_mail;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *ed_manager_name;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *ed_post;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_18;
    QLineEdit *ed_phone;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *ed_internal;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDateEdit *ed_data_call;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QDateEdit *ed_data_next_call;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ed_comment;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::NonModal);
        Dialog->resize(441, 289);
        Dialog->setModal(false);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        ed_name = new QLineEdit(Dialog);
        ed_name->setObjectName(QString::fromUtf8("ed_name"));

        horizontalLayout->addWidget(ed_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        ed_user = new QLineEdit(Dialog);
        ed_user->setObjectName(QString::fromUtf8("ed_user"));

        horizontalLayout_5->addWidget(ed_user);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        ed_organization = new QLineEdit(Dialog);
        ed_organization->setObjectName(QString::fromUtf8("ed_organization"));

        horizontalLayout_6->addWidget(ed_organization);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        ed_site = new QLineEdit(Dialog);
        ed_site->setObjectName(QString::fromUtf8("ed_site"));

        horizontalLayout_7->addWidget(ed_site);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        ed_mail = new QLineEdit(Dialog);
        ed_mail->setObjectName(QString::fromUtf8("ed_mail"));

        horizontalLayout_8->addWidget(ed_mail);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_20->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        ed_manager_name = new QLineEdit(Dialog);
        ed_manager_name->setObjectName(QString::fromUtf8("ed_manager_name"));

        horizontalLayout_14->addWidget(ed_manager_name);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(Dialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        ed_post = new QLineEdit(Dialog);
        ed_post->setObjectName(QString::fromUtf8("ed_post"));

        horizontalLayout_17->addWidget(ed_post);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_18 = new QLabel(Dialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_15->addWidget(label_18);

        ed_phone = new QLineEdit(Dialog);
        ed_phone->setObjectName(QString::fromUtf8("ed_phone"));

        horizontalLayout_15->addWidget(ed_phone);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(Dialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_18->addWidget(label_16);

        ed_internal = new QLineEdit(Dialog);
        ed_internal->setObjectName(QString::fromUtf8("ed_internal"));

        horizontalLayout_18->addWidget(ed_internal);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));

        verticalLayout_2->addLayout(horizontalLayout_16);


        horizontalLayout_20->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_20);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        ed_data_call = new QDateEdit(Dialog);
        ed_data_call->setObjectName(QString::fromUtf8("ed_data_call"));
        ed_data_call->setCalendarPopup(true);
        ed_data_call->setCurrentSectionIndex(0);

        horizontalLayout_4->addWidget(ed_data_call);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_19 = new QLabel(Dialog);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_9->addWidget(label_19);

        ed_data_next_call = new QDateEdit(Dialog);
        ed_data_next_call->setObjectName(QString::fromUtf8("ed_data_next_call"));
        ed_data_next_call->setCalendarPopup(true);
        ed_data_next_call->setCurrentSectionIndex(0);

        horizontalLayout_9->addWidget(ed_data_next_call);


        horizontalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ed_comment = new QLineEdit(Dialog);
        ed_comment->setObjectName(QString::fromUtf8("ed_comment"));

        horizontalLayout_3->addWidget(ed_comment);


        verticalLayout_3->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\320\230\320\274\321\217", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Dialog", "\320\241\320\260\320\271\321\202", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "E-Mail", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Dialog", "\320\230\320\274\321\217 \320\274\320\265\320\275\320\265\320\264\320\266\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Dialog", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Dialog", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Dialog", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\320\224\320\260\321\202\320\260 \320\267\320\262\320\276\320\275\320\272\320\260", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Dialog", "\320\224\320\260\321\202\320\260 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276 \320\267\320\262\320\276\320\275\320\272\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\320\232\320\276\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
