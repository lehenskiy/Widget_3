#include <cmath>
#include "figure.h"

void Figure::rotate(float Alpha, QPainter *Painter)
{
    dx=halflen*cos(Alpha);
    dy=halflen*sin(Alpha);

    draw(Painter);
}

void Line::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);
}

void Square::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
