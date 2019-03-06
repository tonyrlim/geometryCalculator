#include <iostream>
#include <iomanip>
#include <cstdlib>
#define pi 3.14159

using namespace std;

void circleArea();
void rectangleArea();
void triangleArea();

int main()
{
    short menu;
    cout << "Geometry Calculator" << endl << endl;
    cout <<"1. Calculate the Area of a Circle" << endl <<
           "2. Calculate the Area of a Rectangle" << endl <<
           "3. Calculate the Area of a Triangle" << endl <<
           "4. Quit" << endl << endl <<
           "Enter your choice (1-4): ";
    cin >> menu;

    switch(menu)
    {
        case 1:
            circleArea();
            break;
        case 2:
            rectangleArea();
            break;
        case 3:
            triangleArea();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid Option." << endl;
            exit(0);
    }
    return 0;
}

void circleArea()
{
    float radius;
    cout << "Please enter the radius of the circle: ";
    cin >> radius;
    if(radius < 0)
    {
        cout << "It is impossible to have a negative radius!" << endl;
        circleArea();
    }
    else
    {
        cout << "The area of the circle is " << fixed << setprecision(2) <<
                pi * radius * radius << endl;
    }
}

void rectangleArea()
{
    float length, width;
    cout << "Please enter the length of the rectangle: ";
    cin >> length;
    if(static_cast<int>(length) <= 0)
    {
        if(length <0)
        {
            cout << "Length must be a positive!" << endl;
            exit(0);
        }
        else if(length==length/2)

        {
            cout << "Length is 0";
            exit(0);
        }
    }
    cout << "Please enter the width of the rectangle: ";
    cin >> width;
    if(static_cast<int>(width) <= 0)
    {
        if(width <0)
        {
            cout << "Width must be a positive!" << endl;
            exit(0);
        }
        else if(width==width/2)

        {
            cout << "Width is 0";
            exit(0);
        }
    }
    else
    {
        cout << "The area of the rectangle is " << fixed << setprecision(2) <<
                length * width << endl;
    }
}

void triangleArea()
{
    float base, height;
    cout << "Please enter the base of the triangle: ";
    cin >> base;
    if(static_cast<int>(base) <= 0)
    {
        if(base <0)
        {
            cout << "Base must be a positive!" << endl;
            exit(0);
        }
        else if(base==base/2)

        {
            cout << "Base is 0";
            exit(0);
        }
    }
    cout << "Please enter the height of the triangle: ";
    cin >> height;
    if(static_cast<int>(height) <= 0)
    {
        if(height <0)
        {
            cout << "Height must be a positive!" << endl;
            exit(0);
        }
        else if(height==height/2)

        {
            cout << "Height is 0";
            exit(0);
        }
    }
    else
    {
        cout << "The area of the triangle is " << fixed << setprecision(2) <<
                base * height * .5 << endl;
    }
}
