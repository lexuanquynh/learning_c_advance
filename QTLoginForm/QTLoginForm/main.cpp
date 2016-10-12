#include "qtloginform.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTLoginForm w;
	w.show();
	return a.exec();
}
