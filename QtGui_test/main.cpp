#include <QtWidgets/QApplication>
#include <QLabel>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

#include "mainwindow.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	MainWindow mainWin;
	mainWin.show();

	return a.exec(); //enter the event loop
}
