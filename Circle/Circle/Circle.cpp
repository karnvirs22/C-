#include "pch.h"
#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{	
	Circle a(3.0), b(2.0), c, d, e;
	c = a + b;
	d = a - b;
	e = a * b;

	cout << a << endl;
	cout << b << endl;
	cout << c << "This the sum of circle A with B\n" << endl;
	cout << d << "This the subtraction of circle A with B\n" << endl;
	cout << e << "This the product of circle A with B\n" << endl;

	if (a > b) {
		cout << "Circle A is greater then B\n";
	} else if (a <= b) {
		cout << "Circle A is less then B\n";
	} else if (a == b) {
		cout << "A is equal to B\n";
	}
	else 
		return 0;

}
