#include<iostream>
#include "Shape.h"
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape
{

    private:

        double radius;

    public:

        Circle ();

        Circle(double radiusCircle );

        Circle(double radiusCircle, string colorShape, bool isFilled );

        void setRadius(double );

        double getRadius();

        double getArea();

        double getPerimeter();

        string toString();

};

#endif
