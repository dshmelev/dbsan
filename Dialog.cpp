#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::Dialog)
{
    m_ui->setupUi(this);
    search = false;
    StrKey=-1;
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
    if (search)
    {
        QString model_query="";
	if (!m_ui->ed_name->text().isEmpty()) model_query= model_query + "name LIKE '%" + m_ui->ed_name->text() + "%' AND ";
	if (!m_ui->ed_user->text().isEmpty()) model_query= model_query + "user LIKE '%" + m_ui->ed_user->text() + "%' AND ";
	if (!m_ui->ed_organization->text().isEmpty()) model_query= model_query + "organization LIKE '%" + m_ui->ed_organization->text() + "%' AND ";
	if (!m_ui->ed_site->text().isEmpty()) model_query= model_query + "site LIKE '%" + m_ui->ed_site->text() + "%' AND ";
	if (!m_ui->ed_mail->text().isEmpty()) model_query= model_query + "mail LIKE '%" + m_ui->ed_mail->text() + "%' AND ";
	if (!m_ui->ed_post->text().isEmpty()) model_query= model_query + "post LIKE '%" + m_ui->ed_post->text() + "%' AND ";
	if (!m_ui->ed_phone->text().isEmpty()) model_query= model_query + "telephone LIKE '%" + m_ui->ed_phone->text() + "%' AND ";
	if (!m_ui->ed_internal->text().isEmpty()) model_query= model_query + "internal LIKE '%" + m_ui->ed_internal->text() + "%' AND ";
	if (!m_ui->ed_manager_name->text().isEmpty()) model_query= model_query + "manager_name LIKE '%" + m_ui->ed_manager_name->text() + "%' AND ";
	if (!m_ui->ed_comment->text().isEmpty()) model_query= model_query + "comment LIKE '%" + m_ui->ed_comment->text() + "% AND '";
	model_query= model_query + "key LIKE '%';";
	model->setFilter(model_query);
        return;
    }
    int row = StrKey;
    if (row==-1)
    {
        row = model->rowCount();
        model->insertRows(row, 1);
    }
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
    StrKey=row;
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

void Dialog::func_search()
{
    search = true;
    m_ui->ed_data_call->setVisible(false);
    m_ui->label_2->setVisible(false);
    m_ui->ed_data_next_call->setVisible(false);
    m_ui->label_19->setVisible(false);
}

void Dialog::on_buttonBox_rejected()
{
    model->setFilter("");
}
