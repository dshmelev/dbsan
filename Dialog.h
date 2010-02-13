#ifndef DIALOG_H
#define DIALOG_H

#include <QtGui/QDialog>
#include <QSqlQuery>
#include <QTextStream>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QTimer>
#include <QSqlTableModel>


namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
	Dialog(QWidget *parent = 0);
	~Dialog();
	void edit(int);
	void SetModel(QSqlTableModel*);
protected:
    void changeEvent(QEvent *e);

private:
	QSqlTableModel *model;
        Ui::Dialog *m_ui;
        int StrKey;

private slots:
	void on_buttonBox_accepted();
};

#endif // DIALOG_H
