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
	if (model->setData(model->index(row, 0), 0))
	{
		QMessageBox::critical(this,"ROW","YES!");
	};
	model->setData(model->index(row, 1), "AAA");
	model->setData(model->index(row, 2) , "TESS");
	model->submitAll();
	QMessageBox::critical(this,"",	model->database().connectionName());
}

void Dialog::edit(QModelIndex index) {
/*	StrKey=index;
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
	db.close(); */
}

void Dialog::SetModel(QSqlTableModel *new_model)
{
	model=new_model;
}
