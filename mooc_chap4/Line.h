#pragma once

#include <iostream>
#include "Point.h"


class Line
{
public:
	Line() = default;
	Line(Point p1, Point p2);
	Line(Line& l) :p1(l.p1), p2(l.p2) {
		std::cout << "calling the copy constructor of Line" << std::endl;
		len = l.len;
	}
	double getLen() { return len; }

private:
	Point p1, p2;
	double len;
};

Line::Line(Point p1, Point p2) :p1(p1), p2(p2) {
	std::cout << "calling constructor of Line" << std::endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x * x + y * y);
}
