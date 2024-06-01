#include "Point.h"

int main()
{
    Point p1;
    Point p2(2, 3);
    p1.setX(1);
    p1.setY(5);
    p1.print();
    cout << p2.getX() << "." << p2.getY() << endl;
    cout << Point::getC();
    
    return 0;
}