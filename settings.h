#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtGui/QDialog>
#include <QSettings>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
    class settings;
}

class settings : public QDialog {
    Q_OBJECT
public:
    void writeSettings();
    void readSettings();
    static QString getSettings(QString);
    settings(QWidget *parent = 0);
    ~settings();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::settings *m_ui;

private slots:
    void on_new_btn_clicked();
    void on_Cancel_clicked();
    void on_OK_clicked();
    void on_local_button_clicked();
    void on_local_radio_clicked();
    void on_remote_radio_clicked();
};

#endif // SETTINGS_H
