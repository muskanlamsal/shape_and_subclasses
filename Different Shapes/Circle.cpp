#include<iostream>
#include<sstream>
#include "Circle.h"
using namespace std;

    Circle :: Circle ()
        {
            radius=1.0;
        }

    Circle :: Circle(double radiusCircle )
        {
            radius=radiusCircle;
        }

    Circle :: Circle(double radiusCircle, string colorShape, bool isFilled ): Shape(colorShape, isFilled)
        {
            radius=radiusCircle;

        }

    void Circle :: setRadius(  double radiusCircle)
        {
            radius=radiusCircle;
        }

    double Circle :: getRadius()
        {
            return radius;
        }

    double Circle :: getArea()
        {
            return 3.14*getRadius()*getRadius();
        }

    double  Circle :: getPerimeter()
        {
            return 2 *3.14 * getRadius();
        }

    string Circle:: toString()
        {
            stringstream rad;
            rad << getRadius();
            return "A circle with the radius " + rad.str()+ " which is the subclass of " + Shape:: toString();
        }

