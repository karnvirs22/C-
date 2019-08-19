#include "pch.h"
#include<iostream>
#include<fstream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	//Default constructor:
	Rectangle();
	//Non-default constructor:
	Rectangle(double l, double w);
	Rectangle(double l);
	void display();
	Rectangle operator+(Rectangle rec);
	bool operator>(Rectangle rec);
	bool operator==(Rectangle rec);
	friend ostream &operator<<(ostream &out, Rectangle &rec); //With friend key word we give the right to 
														   //the function to use private variables.
};
//Definitions of constructors;
Rectangle::Rectangle()
{
	length = 1;
	width = 1;
}
Rectangle::Rectangle(double L)
{
	length = L;
	width = 1;
}
Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}
//Definition of Methods:
void Rectangle::display()
{
	cout << "This is a Rectangle" << endl;
	cout << "The Width is " << width << endl;
	cout << "The Length is " << length << endl;
}
//Overloading + statement
Rectangle Rectangle::operator+(Rectangle rec) 
{
	Rectangle s(1, 1);
	s.length = this->length + rec.length;//This-> reppresents the value of the current Rectangle
	s.width = this->width + rec.width;
	return s;
}
//Overloading > statement
bool Rectangle::operator>(Rectangle rec)
{
	if (this->length*this->width > rec.length*rec.width) {
		return true;
	}
	else return false;
}
//Overloading == statement
bool Rectangle::operator==(Rectangle rec)
{
	if (this->length == rec.length && this->width == rec.width) {
		return true;
	}
	else return false;
}
//Overloading << statement
ostream &operator<<(ostream &out, Rectangle &rec) 
{
	out << "This is a rectangle.\n";
	out << "The length is " << rec.length << endl;
	out << "The width is " << rec.width << endl;
	return out;
}