#include<iostream>
#include<string>
#include<sstream>
#include "Triangle.h"
using namespace std;

int main()
{
	Triangle a (3, 4);
	Triangle b (4, 5);

	cout << a++ << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	a = b;
	cout << a << endl;

	Triangle c; 

	cout << "Enter legs ->" << endl << endl;
	cin >> c;

	cout << "hypotenuse = " <<c.hypotenuse() << endl;
}