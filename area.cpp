#include "area.h"

Area::Area(QWidget *parent) : QWidget(parent) {
  setFixedSize(QSize(300, 200));
  line = new Line(80, 100, 50);
  square = new Square(220, 100, 50);

  if (line == nullptr or square == nullptr) {
	throw std::bad_alloc();
  }

  alpha = 0;
}

void Area::showEvent(QShowEvent *) {
  myTimer = startTimer(50);
}

void Area::paintEvent(QPaintEvent *) {
  QPainter painter(this);
  painter.setPen(Qt::black);

  line->rotate(alpha, &painter);
  square->rotate(alpha * (-0.5), &painter);
}

void Area::timerEvent(QTimerEvent *event) {
  if (event->timerId() == myTimer) {
	alpha = alpha + 0.2;
	update();
  } else {
	QWidget::timerEvent(event);
  }
}

Area::~Area() {
  delete line;
  delete square;
}
