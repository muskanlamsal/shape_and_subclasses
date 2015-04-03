#include <iostream>
using namespace std;

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"

void detailShape(string &colorShape, bool &isFilled);
void detailCircle (double &radius_circle, string &colorShape, bool &isFilled);
void detailRectangle(double &width_rectangle, double &length_rectangle, string &colorShape, bool &isFilled);
void detailSquare( double &side, string &colorShape, bool &isFilled);


int main()
{
        string colorShape;
        double radius_circle, width_rectangle, length_rectangle,sideSquare;
        bool isFilled;
        string shapeType;
        Shape shape1;
        cout<<"What shape do you want?? (CIRCLE/SQUARE/RECTANGLE)";
        cin>>shapeType;
        cout<<endl;

    if(shapeType=="circle")
         {

            cout<<"CIRCLE\n";
            detailCircle ( radius_circle,  colorShape, isFilled);
            Circle Circle1(radius_circle, colorShape, isFilled);
            cout<<Circle1.toString();
            cout<<endl;
            cout<<" The Area of Circle : " <<Circle1.getArea()<<" and the perimeter is: " << Circle1.getPerimeter();


      }

   else if(shapeType=="rectangle")

   {

        cout<<"RECTANGLE\n";
        detailRectangle( width_rectangle,  length_rectangle,  colorShape,  isFilled);
        Rectangle Rectangle1( width_rectangle, length_rectangle,  colorShape,  isFilled);
        cout<<Rectangle1.toString();
        cout<<endl;
         cout<<" The Area of rectangle : " <<Rectangle1.getArea()<<" and the perimeter is: " << Rectangle1.getPerimeter();



 }


   else if(shapeType=="square")

   {
            cout<<"SQUARE\n";


            detailSquare(sideSquare,colorShape,isFilled);
            Square Square1(sideSquare,colorShape,isFilled);
            cout<<Square1.toString();



   }

   else
           {
               cout<<"Please enter valid shape";
           }

}
void detailShape(string &colorShape, bool &isFilled)
{

        cout<<"Enter the color of the given shape:";
        cin>>colorShape;
        cout<<endl;
        cout<<"Is it Filled ? (1 For Yes, 0 For No)";
        cin >> isFilled;
        cout << endl;
}

void detailCircle (double &radius_circle, string &colorShape, bool &isFilled)
{

        cout<<"Enter the radius of the Circle:";
        cin>>radius_circle;
        cout<<endl;
        detailShape( colorShape,isFilled);
}

void detailRectangle(double &width_rectangle, double &length_rectangle, string &colorShape, bool &isFilled)
{

        cout<<"Enter the width of the rectangle:";
        cin>>width_rectangle;
        cout<<endl;
        cout<<"Enter the length of the rectangle:";
        cin>>length_rectangle;
        cout<<endl;
        detailShape( colorShape,isFilled);

}

void detailSquare( double &sideSquare, string &colorShape, bool &isFilled)
{

    cout<<"Enter the side of Square";
    cin>>sideSquare;
    cout<<endl;
    detailShape( colorShape,isFilled);


}



