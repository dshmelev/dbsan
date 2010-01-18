#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::settings)
{
    m_ui->setupUi(this);
    readSettings();
}

settings::~settings()
{
    delete m_ui;
}

void settings::changeEvent(QEvent *e)
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

void settings::on_local_radio_clicked()
{
    m_ui->local_box->setEnabled(TRUE);
    m_ui->remote_box->setEnabled(FALSE);
}

void settings::on_remote_radio_clicked()
{
    m_ui->local_box->setEnabled(FALSE);
    m_ui->remote_box->setEnabled(TRUE);
}

void settings::writeSettings()
{
    QSettings config("FreeNET Inc","DBSan");
    config.beginGroup("Default");
        if (m_ui->local_radio->isChecked())
        {
            config.setValue("DB","0");
            config.setValue("file",m_ui->local_edit->text());
        }
            else
        {
            config.setValue("DB","1");
            config.setValue("host",m_ui->remote_host_ed->text());
            config.setValue("base",m_ui->remote_base_ed->text());
            config.setValue("login",m_ui->remote_login_ed->text());
            config.setValue("passwd",m_ui->remote_passwd_ed->text());
        }
    config.endGroup();
}

void settings::readSettings()
{
    QSettings config("FreeNET Inc","DBSan");
    config.beginGroup("Default");
        if (config.value("DB").toBool())
        {
            m_ui->remote_radio->setChecked(TRUE);
            m_ui->local_box->setEnabled(FALSE);
            m_ui->remote_box->setEnabled(TRUE);
        }
        else
        {
            m_ui->local_radio->setChecked(TRUE);
            m_ui->local_box->setEnabled(TRUE);
            m_ui->remote_box->setEnabled(FALSE);
        }
        m_ui->local_edit->setText(config.value("file").toString());
        m_ui->remote_host_ed->setText(config.value("host").toString());
        m_ui->remote_base_ed->setText(config.value("base").toString());
        m_ui->remote_login_ed->setText(config.value("login").toString());
        m_ui->remote_passwd_ed->setText(config.value("passwd").toString());
    config.endGroup();
}

QString settings::getSettings(QString query)
{

    QSettings config("FreeNET Inc","DBSan");
    config.beginGroup("Default");
        QString str = config.value(query).toString();
    config.endGroup();
    return str;
}

void settings::on_local_button_clicked()
{
        m_ui->local_edit->setText(QFileDialog::getOpenFileName());
}

void settings::on_OK_clicked()
{
   writeSettings();
   this->close();
}

void settings::on_Cancel_clicked()
{
    this->close();
}

void settings::on_new_btn_clicked()
{
    if (m_ui->local_radio->isChecked())
    {
        QString str = QFileDialog::getExistingDirectory()+"/database.sqlite";
        QFileInfo dbfile(str);
        if (!dbfile.isFile())
        {
            m_ui->local_edit->setText(str);
        }
		else QMessageBox::critical(this,"ERROR",QString::fromLocal8Bit("Ошибка. В данной дириктории уже существует файл базы. Замена файла неминуемо приведет к потери данных. Операция остановлена."));
    }
}
