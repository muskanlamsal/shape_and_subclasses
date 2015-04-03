#include<iostream>
#include<sstream>
#include "Square.h"
#include "Rectangle.h"
using namespace std;



     Square:: Square():Rectangle ()
     {

     }

       Square:: Square(double side):Rectangle(side,side)
     {

     }

       Square:: Square( double side, string colorShape , bool isFilled ): Rectangle(side , side, colorShape, isFilled)
     {

     }

     void Square:: setSide(double side)
     {
         Rectangle::setLength(side);
     }

     double Square:: getSide()
     {
         return Rectangle::getLength();
     }

    void Square::setLength(double side)
    {
        setSide(side);
    }

    void Square::setWidth(double side)
    {
        setSide(side);
    }
     string  Square:: toString()
     {
         stringstream side;
         side<<Rectangle::getLength();
         return "A square with side " + side.str() + " subclass of " + Rectangle:: toString() ;
     }
