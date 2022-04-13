#include "Triangle.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Triangle::Triangle()		//konstr bez argumenta
{
	first = 0;
	second = 0;
}

Triangle::Triangle(double l, double r)		//konstr inicializacii
{
	if (r > 0 && l > 0) {
		first = l;
		second = r;
	}
	else
	{
		first = 0;
		second = 0;
	}
}

Triangle::Triangle(const Triangle& r)		//konstr kopiyuvannya
{
	first = r.first;
	second = r.second;
}



Triangle::operator string() const
{
	stringstream ss;
	ss << " first = " << first << endl;
	ss << " second = " << second << endl;
	return ss.str();
}

Triangle& Triangle::operator=(const Triangle& t)   
{
	first = t.first;
	second = t.second;

	return *this;
}

Triangle& Triangle::operator++()
{
	second++;
	return *this;
}

Triangle& Triangle::operator--()
{
	second--;
	return *this;
}

Triangle Triangle::operator++(int)
{
	Triangle t(*this);
	first++;
	return t;
}

Triangle Triangle::operator--(int)
{
	Triangle t(*this);
	first--;
	return t;
}

double Triangle::hypotenuse()
{
	return sqrt(pow(first, 2) + pow(second, 2));
}

ostream& operator<<(ostream& out, const Triangle& t)
{
	out << string(t);
	return out;
}

istream& operator>>(istream& in, Triangle& t)
{
	cout << " First = "; in >> t.first;
	cout << " Second = "; in >> t.second;
	cout << endl;
	return in;
}
