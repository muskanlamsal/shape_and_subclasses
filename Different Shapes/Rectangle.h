#include<iostream>
#include "Shape.h"
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape
{

private:

    double width;
    double length;

public:
    Rectangle ();

    Rectangle (double width_Rectangle, double length_Rectangle);

    Rectangle(double width_Rectangle, double length_Rectangle, string colorShape, bool isFilled );

    void setWidth( double width_Rectangle);

    double getWidth();

    double getLength();

    void setLength(double length_Rectangle);

    double getArea();

    double getPerimeter();

    string toString();

};


#endif // RECTANGLE_H
