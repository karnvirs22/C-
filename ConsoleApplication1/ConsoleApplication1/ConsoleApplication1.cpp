#include<iostream>
#include "pch.h"
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle a(7, 11), b(5, 4), s(1,1);
	//a.display();
	//b.display();
	cout << a << endl;
	cout << b << endl;
	s = a + b;
	s.display();
	if (a > b) {
		cout <<"\nRectangle A is greater  then B" << endl;
	}
	else if (a == b) {
		cout << "\nRectangle A is equal to B" << endl;
	} else {
		cout << "\nRectangle A is less than or equal to B.\n" << endl;
	}

	system("pause");
	return 0;
}
