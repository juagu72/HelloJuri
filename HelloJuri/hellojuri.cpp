#include "hellojuri.h"

#include <QMessageBox>

HelloJuri::HelloJuri(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

HelloJuri::~HelloJuri()
{

}

void HelloJuri::on_pushButton_clicked()
{
//	QMessageBox::aboutQt(this);
	QMessageBox::about(this, "Hallo Juri", "Version 0.3");
}
