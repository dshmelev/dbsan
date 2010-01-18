#include <QtGui/QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QFontDialog>



#include "mainwindow.h"



int main(int argc, char *argv[])
{
	QCoreApplication::setOrganizationName("LLC_STRIZH");
	QCoreApplication::setApplicationName("dbsan");

	QApplication a(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
	a.addLibraryPath(a.applicationDirPath() + "./lib");

	a.setStyle("Cleanlooks");
	MainWindow w;
    w.show();
    return a.exec();
}
