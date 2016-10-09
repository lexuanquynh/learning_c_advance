#ifndef QTCOURSE_H
#define QTCOURSE_H

#include <QtWidgets/QMainWindow>
#include "ui_qtcourse.h"
#include <QTreeWidget>
#include <QTreeWidgetItem>
class QtCourse : public QMainWindow
{
	Q_OBJECT

public:
	QtCourse(QWidget *parent = 0);
	~QtCourse();
private:
	void addRotAndChild(QString rootName, QStringList listChild);
	/*void addRootTreeView(QString name, QString description);
	void addChildTreeView(QTreeWidgetItem* parent, QString name, QString description);*/
private:
	Ui::QtCourseClass ui;
};

#endif // QTCOURSE_H
