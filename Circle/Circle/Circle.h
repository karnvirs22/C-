#include<iostream>
#include<fstream>
using namespace std;

class Circle 
{
private:
		double radius;
public:
	Circle();
	Circle(double rad);
	void display();
	Circle operator+(Circle circ);
	Circle operator-(Circle circ);
	Circle operator*(Circle circ);
	bool operator>(Circle circ);
	bool operator<=(Circle circ);
	bool operator==(Circle circ);
	friend ostream &operator<<(ostream &out, Circle &circ);
};
//Counstructors
Circle::Circle() {
	radius = 1.0;
}
Circle::Circle(double rad) {
	radius = rad;
}
//Overloading +
Circle Circle::operator+(Circle circ) {
	Circle c(1.0);
	c.radius = this->radius + circ.radius;
	return c;
}
//Overloading -
Circle Circle::operator-(Circle circ) {
	Circle c(1.0);
	c.radius = this->radius - circ.radius;
	return c;
}
//Overloading *
Circle Circle::operator*(Circle circ) {
	Circle c(1.0);
	c.radius = this->radius * circ.radius;
	return c;
}

//Overloading >
bool Circle::operator>(Circle circ) {
	if (this->radius > circ.radius) {
		return true;
	}
	else {
		return false;
	}
}
//Overloading <=
bool Circle::operator<=(Circle circ) {
	if (this->radius <= circ.radius) {
		return true;
	}
	else {
		return false;
	}
}
//Overloading ==
bool Circle::operator==(Circle circ) {
	if (this->radius == circ.radius) {
		return true;
	}
	else {
		return false;
	}
}
//Overloading <<
ostream &operator<<(ostream &out, Circle &circ)
{
	out << "This is a circle.\n";
	out << "The radius is " << circ.radius << endl;
	return out;
}
//Display Funciton
void Circle::display() {
	cout << "This is a Circle\n";
	cout << "The radius is " << radius << endl;
}