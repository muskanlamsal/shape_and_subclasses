#include<iostream>
#include "Shape.h"
using namespace std;


        Shape :: Shape ()
            {
                setColor("green");
                setFilled(true);
            }

        Shape :: Shape(string color_shape, bool isFilled)
            {
            setColor(color_shape);
            setFilled(isFilled);
            }

        void Shape ::  setColor(string color_shape)
            {
                color=color_shape;
            }

         string Shape ::  getColor()
            {
                return color;
            }

        void Shape ::  setFilled (bool isFilled)
            {
                filled=isFilled;
            }

         bool Shape :: isFilled()

            {
                return filled;
            }

        string Shape ::  toString()

            {
                string boolToString = (isFilled()==1) ? "filled." : "not filled.";

                return "the shape with color " + color + " is " + boolToString;
            }

