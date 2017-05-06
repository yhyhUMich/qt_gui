#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGui_test.h"

class QtGui_test : public QMainWindow
{
	Q_OBJECT

public:
	QtGui_test(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGui_testClass ui;
};
