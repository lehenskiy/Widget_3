#ifndef FIGURE_H
#define FIGURE_H

#include <QtGui>

class Figure {
 public:
  Figure(int X, int Y, int halflen) : x(X), y(Y), halflen(halflen) {}
  void rotate(float Alpha, QPainter *Painter);

 protected:
  int x;
  int y;
  int halflen;
  int dx;
  int dy;

  virtual void draw(QPainter *Painter) = 0;
};

class Line : public Figure {
 public:
  Line(int x, int y, int halflen) : Figure(x, y, halflen) {}

 protected:
  void draw(QPainter *Painter);
};

class Square : public Figure {
 public:
  Square(int x, int y, int halflen) : Figure(x, y, halflen) {}

 protected:
  void draw(QPainter *Painter);
};

#endif // FIGURE_H
