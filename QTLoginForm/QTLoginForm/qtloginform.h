#ifndef QTLOGINFORM_H
#define QTLOGINFORM_H

#include <QtWidgets/QMainWindow>
#include "ui_qtloginform.h"

class QTLoginForm : public QMainWindow
{
	Q_OBJECT

public:
	QTLoginForm(QWidget *parent = 0);
	~QTLoginForm();

private:
	Ui::QTLoginFormClass ui;
};

#endif // QTLOGINFORM_H
