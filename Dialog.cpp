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
	model->setRecord(0, // Намутить запись в модель
	/*
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "insert");
        db.setDatabaseName(qApp->applicationDirPath() + "/database.sqlite");
        if (!db.open())
	{
		QMessageBox::critical(this, this->windowTitle(), tr("База данных не может быть открыта."));
		return;
	}
	QString str_query;
	if (StrKey.isEmpty())
	{
		QTextStream(&str_query) <<"INSERT INTO `table` VALUES ( "\
			<<"NULL,'"<<m_ui->ed_name->text()\
			<<"','"<<m_ui->ed_user->text()\
			<<"','"<<m_ui->ed_organization->text()\
			<<"','"<<m_ui->ed_site->text()\
			<<"','"<<m_ui->ed_mail->text()\
			<<"','"<<m_ui->ed_post->text()\
			<<"','"<<m_ui->ed_phone->text()\
                        <<"','"<<m_ui->ed_data_call->text()\
                        <<"','"<<m_ui->ed_data_next_call->text()\
			<<"','"<<m_ui->ed_internal->text()\
			<<"','"<<m_ui->ed_manager_name->text()\
			<<"','"<<m_ui->ed_comment->text()<<"');";
	}
	else
	{
		QTextStream(&str_query) <<"UPDATE `table` SET "\
			<<"name='"<<m_ui->ed_name->text()\
			<<"',user='"<<m_ui->ed_user->text()\
			<<"',organization='"<<m_ui->ed_organization->text()\
			<<"',site='"<<m_ui->ed_site->text()\
			<<"',mail='"<<m_ui->ed_mail->text()\
			<<"',post='"<<m_ui->ed_post->text()\
			<<"',telephone='"<<m_ui->ed_phone->text()\
                        <<"',data='"<<m_ui->ed_data_call->text()\
                        <<"',data_call='"<<m_ui->ed_data_next_call->text()\
			<<"',internal='"<<m_ui->ed_internal->text()\
			<<"',manager_name='"<<m_ui->ed_manager_name->text()\
			<<"',comment='"<<m_ui->ed_comment->text()<<"' WHERE key='"<<StrKey<<"';";
	}
        QSqlQuery query(db);
	if (!query.exec(str_query))  QMessageBox::critical(this, tr("Ошибка"), str_query + tr("Сообщение БД:\r\n %1").arg(query.lastError().databaseText()));
		db.close();*/
}

void Dialog::edit(QModelIndex index) {
//	QString str=model->data(model->index(index.row(),0)).toString();
//	QMessageBox::warning(this,"",str);
	StrKey=index;
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "insert");
        db.setDatabaseName(qApp->applicationDirPath() + "/database.sqlite");
        if (!db.open())
	{
		QMessageBox::critical(this, this->windowTitle(), tr("База данных не может быть открыта."));
		return;
	}
	QString str_query;
	QTextStream(&str_query) <<"SELECT * FROM 'table' WHERE key='"<<index<<"'";
	QSqlQuery query(db);
	if (!query.exec(str_query))  QMessageBox::critical(this, tr("Ошибка"), tr("Сообщение БД:\r\n %1").arg(query.lastError().databaseText()));
	query.next();
	m_ui->ed_name->setText(query.value(1).toString());
	m_ui->ed_user->setText(query.value(2).toString());
	m_ui->ed_organization->setText(query.value(3).toString());
	m_ui->ed_site->setText(query.value(4).toString());
	m_ui->ed_mail->setText(query.value(5).toString());
	m_ui->ed_post->setText(query.value(6).toString());
	m_ui->ed_phone->setText(query.value(7).toString());
	m_ui->ed_data_call->setDate(QDate::fromString(query.value(8).toString(),"dd.MM.yy"));
	m_ui->ed_data_next_call->setDate(QDate::fromString(query.value(9).toString(),"dd.MM.yy"));
	m_ui->ed_internal->setText(query.value(10).toString());
	m_ui->ed_manager_name->setText(query.value(11).toString());
	m_ui->ed_comment->setText(query.value(12).toString());
	db.close();
}

void Dialog::SetModel(QSqlTableModel *new_model)
{
	model=new_model;
}
