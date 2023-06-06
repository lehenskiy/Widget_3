#include "widget.h"
#include <QApplication>
#include <iostream>

int main(int argc, char* argv[])
{
	try
	{
		QApplication a(argc, argv);
		Widget w;
		w.setWindowTitle("Event handling");
		w.setFixedSize(306, 250);
		w.show();

		return a.exec();
	}
	catch (const std::bad_alloc&)
	{
		qDebug("Error in allocate memory");
	}
}
