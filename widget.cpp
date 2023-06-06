#include "widget.h"

Widget::Widget() {
  area = new Area(this);
  button = new QPushButton("Завершить", this);
  QVBoxLayout *layout = new QVBoxLayout(this);

  if (area == nullptr or button == nullptr or layout == nullptr) {
	throw std::bad_alloc();
  }

  layout->addWidget(area);
  layout->addWidget(button);

  connect(button, SIGNAL(clicked(bool)), this, SLOT(close()));
}

Widget::~Widget() {
  delete area;
  delete button;
};
