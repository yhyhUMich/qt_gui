#include "QtGui_test.h"
#include <QLabel>

QtGui_test::QtGui_test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.label->setText("Hello World from Alex");


}
