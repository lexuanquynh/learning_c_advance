#include "qtcourse.h"
#include <QTextCodec>

#define COLUMN_TREE_COURSE		 1

QtCourse::QtCourse(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this); 
	//this->showMaximized();


	//QDesktopWidget widget;
	//QRect mainScreenSize = widget.width;
	//int width = mainScreenSize.width;
	//int height = mainScreenSize.height;
	//this->setFixedHeight(100);
	//this->setFixedSize(widget.width, widget.height);

	ui.dsBaiHoctreeWidget->setColumnCount(COLUMN_TREE_COURSE);

	//QTextCodec::fromUnicode(QTextCodec::codecForName("UTF-8"));

	QString winter = QString::fromUtf8("Cách tạo và sử dụng github,  Cách cài đặt phần mềm lập trình C++,  Chương trình đầu tiên");
	
	QStringList list = winter.split(",");

	addRotAndChild("Bài học cơ bản", list);
}

QtCourse::~QtCourse()
{

}

void QtCourse::addRotAndChild(QString rootName, QStringList listChild) {
	QTreeWidgetItem *rootItem = new QTreeWidgetItem(ui.dsBaiHoctreeWidget);
	rootItem->setText(0, rootName);

	for (QStringList::iterator it = listChild.begin();
		it != listChild.end(); ++it) {
			QString current = *it;     

			QTreeWidgetItem *listItem = new QTreeWidgetItem();
			listItem->setText(0, current);

			rootItem->addChild(listItem);
			
	}
}

//void QtCourse::addRootTreeView(QString name, QString description) {
//	QTreeWidgetItem *item = new QTreeWidgetItem(ui.dsBaiHoctreeWidget);
//	item->setText(0, name);
//	ui.dsBaiHoctreeWidget->addTopLevelItem(item);
//	addChildTreeView(item, "Bai hoc thu nhat", "Bai hoc thu 2");
//	addChildTreeView(item, "Bai hoc thu 3", "Bai hoc thu 4");
//}
//
//void QtCourse::addChildTreeView(QTreeWidgetItem* parent, QString name, QString description) {
//	QTreeWidgetItem *item = new QTreeWidgetItem();
//	item->setText(0, name);
//	item->setText(1, description);
//	parent->addChild(item);
//}