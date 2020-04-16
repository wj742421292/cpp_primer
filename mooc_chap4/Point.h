#pragma once

#include <iostream>

class Point
{
public:
	Point() = default;
	Point(int x, int y):x(x),y(y){}
	Point(Point& p) {
		x = p.x;
		y = p.y;
		std::cout << "Calling the copy constructor of Point" << std::endl;
	}


	int getX() { return x; }
	int getY() { return y; }




private:
	int x, y;
};

