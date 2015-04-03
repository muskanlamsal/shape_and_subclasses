#include<iostream>
#include<sstream>
#include "Rectangle.h"
using namespace std;

    Rectangle:: Rectangle  ()
        {
            width=1.0;
            length=1.0;
        }

     Rectangle:: Rectangle  (double width_Rectangle, double length_Rectangle)
        {
            width=width_Rectangle;
            length=length_Rectangle;
        }

     Rectangle:: Rectangle (double width_Rectangle, double length_Rectangle, string colorShape, bool isFilled ): Shape(colorShape, isFilled)
        {
          width=width_Rectangle;
          length=length_Rectangle;
        }

    void Rectangle:: setWidth( double width_Rectangle)
        {
         width=width_Rectangle;
        }

    double Rectangle:: getWidth()
        {
            return width;
        }

    double Rectangle::getLength()
        {
            return length;
        }

    void  Rectangle:: setLength(double length_Rectangle)
        {
             length = length_Rectangle;
        }

    double Rectangle:: getArea()
        {
            return getWidth()*getLength();
        }

    double Rectangle::  getPerimeter()
        {
            return 2*(getWidth()*getLength());
        }

    string Rectangle::  toString()
        {

        stringstream width, length;
        width<<getWidth();
        length<< getLength();
        return "A Rectangle with width : " + width.str()+ " and length :" + length.str()+ ", which is the subclass of " + Shape::toString() ;
        }


