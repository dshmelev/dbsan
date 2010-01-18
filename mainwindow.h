#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTimer>
#include <QSplashScreen>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
	QSqlTableModel *model;

private:
	Ui::MainWindow *ui;
//	QSqlTableModel *model;
	QSqlDatabase db;

private slots:
        void on_actionSettings_triggered();
		void on_btnEd_clicked();
	void on_btn_delete_clicked();
	void refresh();
	void on_btnAdd_clicked();
	void about();
};

#endif // MAINWINDOW_H
