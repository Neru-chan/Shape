#include "Rectangle.h"


/*
start
a        b
 *------*
 |      |
 |      |
 |      |
 *------*
d        c
         end

*/

Rectangle::Rectangle(const Point2D& const start, const Point2D& end)
{
    //this->a.
    this->a = start;
    this->b = { end.get_x(), start.get_y() };
    this->c = end;
    this->d = { start.get_x(), end.get_y() };
}

float Rectangle::perimeter()
{
    return (a.distance(b) + b.distance(c)) * 2;
}

float Rectangle::area()
{
    return a.distance(b) * b.distance(c);
}
