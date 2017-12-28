#include "hellojuri.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HelloJuri w;
	w.show();
	return a.exec();
}
