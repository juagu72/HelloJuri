#ifndef HELLOJURI_H
#define HELLOJURI_H

#include <QtWidgets/QMainWindow>
#include "ui_hellojuri.h"

class HelloJuri : public QMainWindow
{
	Q_OBJECT

public:
	HelloJuri(QWidget *parent = 0);
	~HelloJuri();

public slots:
	void on_pushButton_clicked();

private:
	Ui::HelloJuriClass ui;
};

#endif // HELLOJURI_H
