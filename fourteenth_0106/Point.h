#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    static int c;
public:
    Point() {++c;}
    Point(int a, int b): x(a), y(b) {++c;}
    static int getC();
    int getX() const;
    int getY() const;
    void setX(int a);
    void setY(int a);
    void print() const;
};
