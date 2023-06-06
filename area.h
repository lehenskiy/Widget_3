#ifndef AREA_H
#define AREA_H

#include <QWidget>
#include "figure.h"
#include <QMessageBox>

class Area : public QWidget {
  int myTimer; // Идентификатор таймера
  float alpha;

 public:
  Area(QWidget *parent = 0);
  ~Area();
  Line *line;
  Square *square;

 protected:
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void showEvent(QShowEvent *event);
};

#endif // AREA_H
