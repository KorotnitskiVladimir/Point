#include "Point.h"

int Point::c = 0;

int Point::getC()
{
    return c;
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int a)
{
    x = a;
}

void Point::setY(int a)
{
    y = a;
}

void Point::print() const
{
    cout << x << "." << y << endl;
}
