#include <iostream>
#include <iomanip>
#include <cmath>
#include "triangle.h"

using namespace std;

Triangle::Triangle(int s, char b, char f)						// single constructor
{		
	if (s<1)									// error checking if size isn't 1-39
	SIZE=1;
	else if (s>39)
	SIZE=39;
	else
	SIZE=s;
	border = b;
	fill = f;
}
int Triangle::GetSize()
{
	return SIZE;
}
int Triangle::Perimeter()
{
	int perim = SIZE*3;
	return perim;
}
double Triangle::Area()									// calculates height of triangle based off angles, then area after
{
	double height=(SIZE/2.0)*sqrt(3.0);
	double area=(1/2.0)*SIZE*height;
	return area;
}
void Triangle::Grow()
{
	if(SIZE<39)									// increases if SIZE is less than 39
	SIZE++;
}
void Triangle::Shrink()									// decreases if SIZE is greater than 1
{
	if(SIZE>1)
	SIZE--;
}
void Triangle::SetBorder(char newascii)							// stores new char if it's between ASCII #'s from '!' to '~'
{
	if(newascii>='!' && newascii <= '~')
	border = newascii;
	else
	border = '#';
}
void Triangle::SetFill(char newascii2)							// same as previous function
{
	if (newascii2 >= '!' && newascii2 <= '~')
	fill = newascii2;
	else
	fill = '*';
}
void Triangle::Draw()									// nested for loop to display whitespace, and fill/border char
{
int count=2,count2=4;

	for (int i=count;i<=SIZE;i++)
	{
	for (int j=0; j<=SIZE-i;j++)
	{
	cout << " ";
	}
	if (i>count)
	{
	cout << border << " ";
	}
	if (i>count)
	{
	for (int k=count2;k<=i;k++)
	{
	cout << fill << " ";
	}
	}
	cout << border << " ";
	cout << endl;
	}
	for (int l=count2; l<SIZE+count2;l++)
	{
	cout << border << " ";
	}
	cout << endl;
}
void Triangle::Summary()								// displays various info on triangle based off of member functions			
{
	cout << "Size of triangle's side = " << SIZE << " units." << endl;
	cout << "Perimeter of triangle = " << Perimeter() << " units." << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Area of triangle = " << Area() << " units." << endl;
	cout << "Triangle looks like:" << endl;
	Draw();
}
