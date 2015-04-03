#include<iostream>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    private:

        string color;
        bool filled;

    public:

        Shape ();

        Shape(string color_box, bool isFilled);

        void setColor(string color_box);

        string  getColor();

        void setFilled (bool isFilled);

        bool isFilled();

        string toString();



};

#endif // SHAPE_H
