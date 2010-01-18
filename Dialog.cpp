#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Dialog)
{
    m_ui->setupUi(this);
    StrKey="";
    m_ui->ed_data_call->setDate(QDate::currentDate ());
    m_ui->ed_data_next_call->setDate(QDate::currentDate());
}

Dialog::~Dialog()
{
    delete m_ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::on_buttonBox_accepted()
{
	int row = model->rowCount();
	model->insertRows(row, 1);
	model->setData(model->index(row, 1),m_ui->ed_name->text());
	model->setData(model->index(row, 2),m_ui->ed_user->text());
	model->setData(model->index(row, 3),m_ui->ed_organization->text());
	model->setData(model->index(row, 4),m_ui->ed_site->text());
	model->setData(model->index(row, 5),m_ui->ed_mail->text());
	model->setData(model->index(row, 6),m_ui->ed_post->text());
	model->setData(model->index(row, 7),m_ui->ed_phone->text());
	model->setData(model->index(row, 8),m_ui->ed_data_call->text());
	model->setData(model->index(row, 9),m_ui->ed_data_next_call->text());
	model->setData(model->index(row, 10),m_ui->ed_internal->text());
	model->setData(model->index(row, 11),m_ui->ed_manager_name->text());
	model->setData(model->index(row, 12),m_ui->ed_comment->text());
	if (!model->submitAll()) QMessageBox::critical(this,"",	model->lastError().text());
}

void Dialog::edit(int row) {
	m_ui->ed_name->setText(model->index(row,1).data().toString());
	m_ui->ed_user->setText(model->index(row,2).data().toString());
	m_ui->ed_organization->setText(model->index(row,3).data().toString());
	m_ui->ed_site->setText(model->index(row,4).data().toString());
	m_ui->ed_mail->setText(model->index(row,5).data().toString());
	m_ui->ed_post->setText(model->index(row,6).data().toString());
	m_ui->ed_phone->setText(model->index(row,7).data().toString());
	m_ui->ed_data_call->setDate(QDate::fromString(model->index(row,8).data().toString(),"dd.MM.yy"));
	m_ui->ed_data_next_call->setDate(QDate::fromString(model->index(row,9).data().toString(),"dd.MM.yy"));
	m_ui->ed_internal->setText(model->index(row,10).data().toString());
	m_ui->ed_manager_name->setText(model->index(row,11).data().toString());
	m_ui->ed_comment->setText(model->index(row,12).data().toString());
}

void Dialog::SetModel(QSqlTableModel *new_model)
{
	model=new_model;
}
