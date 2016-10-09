#include "qtcourse.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCourse w;
	w.show();
	return a.exec();
}
