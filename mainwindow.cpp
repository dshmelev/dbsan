#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Dialog.h"
#include "settings.h"
#include <QCalendarWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap(":/res/splash.jpg"));
	splash->showMessage("DBsan v.0.1 \n FreeNET 2009",Qt::Alignment(Qt::AlignRight | Qt::AlignTop),"white");
	splash->show();
        ui->setupUi(this);
        QSqlDatabase db;
	connect(ui->action_About,SIGNAL(triggered()),this,SLOT(about()));
	connect(ui->action_Add,SIGNAL(triggered()),this,SLOT(on_btnAdd_clicked()));
	connect(ui->action_Delete,SIGNAL(triggered()),this,SLOT(on_btn_delete_clicked()));
	connect(ui->action_Edit,SIGNAL(triggered()),this,SLOT(on_btnEd_clicked()));
	connect(ui->action_Search,SIGNAL(triggered()),this,SLOT(on_btn_filter_clicked()));
	connect(ui->action_Refresh,SIGNAL(triggered()),this,SLOT(refresh()));
        QTimer *refresh = new QTimer(this);
        connect(refresh,SIGNAL(timeout()),this,SLOT(refresh()));
        refresh->start(30000);

        if (settings::getSettings("DB")=="0")
        {
            db = QSqlDatabase::addDatabase("QSQLITE", "connection");
            db.setDatabaseName(settings::getSettings("file"));
        }
        else
        {
            db = QSqlDatabase::addDatabase("QMYSQL", "connection");
            db.setHostName(settings::getSettings("Host"));
            db.setDatabaseName(settings::getSettings("base"));
            db.setUserName(settings::getSettings("login"));
            db.setPassword(settings::getSettings("passwd"));
        }

        model = new QSqlTableModel(ui->tableView,db);
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	if (!model->database().open())
	{
	    QMessageBox::critical(this, this->windowTitle(), tr("База данных не может быть открыта: %1").arg(model->database().lastError().databaseText()));
	    return;
	}
	model->setTable("work");
	ui->tableView->setModel(model);
	this->refresh();
	splash->finish(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
	Dialog dlg;
	dlg.SetModel(model);
	dlg.setWindowTitle(tr("Добавить запись"));
	dlg.exec();
}

void MainWindow::refresh()
{
	QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    model->database().close();
	if (!model->database().open())
	{
		QMessageBox::critical(this, this->windowTitle(), tr("База данных не может быть открыта: %1").arg(model->database().lastError().databaseText()));
		return;
    }
	if (!model->select())
	{
		QMessageBox::critical(this, this->windowTitle(), tr("Модель не может быть открыта: <br> %1").arg(model->lastError().text()));
		return;
	}

    ui->tableView->setColumnHidden(0,true);
    model->setHeaderData(1, Qt::Horizontal, tr("Название"));
    model->setHeaderData(2, Qt::Horizontal, tr("Имя"));
    model->setHeaderData(3, Qt::Horizontal, tr("Организация"));
    model->setHeaderData(4, Qt::Horizontal, tr("Сайт"));
    model->setHeaderData(5, Qt::Horizontal, tr("E-Mail"));
    model->setHeaderData(6, Qt::Horizontal, tr("Должность"));
    model->setHeaderData(7, Qt::Horizontal, tr("Телефон"));
    model->setHeaderData(8, Qt::Horizontal, tr("Дата звонка"));
    model->setHeaderData(9, Qt::Horizontal, tr("Следующий звонок"));
    model->setHeaderData(10, Qt::Horizontal, tr("Внутренний"));
    model->setHeaderData(11, Qt::Horizontal, tr("Имя менеджера"));
    model->setHeaderData(12, Qt::Horizontal, tr("Коментарий"));
	ui->tableView->resizeColumnsToContents();
	ui->tableView->selectRow(index.row());
}

void MainWindow::on_btn_delete_clicked()
{	
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    model->removeRows(index.row(),1);
    if (!model->submitAll())
	{
	    QMessageBox::critical(this, this->windowTitle(), tr("Данные не сохранены: %1").arg(model->lastError().text()));
	    model->database().rollback();
    }
	ui->tableView->resizeColumnsToContents();
    ui->tableView->selectRow(index.row()-1);
	this->refresh();
}

void MainWindow::about()
{
QMessageBox::about( this, "About DBSan",
        "Copyright (c) 2009 FreeNET Inc. All rights reserved.\n"
        "Use of this source code is governed by a BSD-style license\n\n"
	"For technical support, call +7(960)720-32-36\n"
	"mailto: avikez@gmail.com or dmytry.shmelyov@intel.com\n");
}

void MainWindow::on_btnEd_clicked()
{
	int row =ui->tableView->selectionModel()->currentIndex().row();
	Dialog dlg;
	dlg.SetModel(model);
	dlg.setWindowTitle(tr("Редактировать запись"));
	dlg.edit(row);
	dlg.exec();
}

void MainWindow::on_actionSettings_triggered()
{
    settings dlg;
    dlg.exec();
}

void MainWindow::on_btn_filter_clicked()
{
    Dialog dlg;
    dlg.SetModel(model);
    dlg.func_search();
    dlg.setWindowTitle(tr("Поиск по базе"));
    dlg.exec();
}
