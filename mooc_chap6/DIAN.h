#pragma once

#include <iostream>
#include <cassert>

class DIAN
{
public:
	DIAN() :x(0), y(0) {
		std::cout << "default constructor called" << std::endl;
	}
	DIAN(int x, int y) :x(x), y(y) {
		std::cout << "Constructor called" << std::endl;
	}
	~DIAN() {
		std::cout << "Destructor called" << std::endl;
	}

	int getX() { return x; }
	int getY() { return y; }
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}

private:
	int x, y;
};

	class ARRAY_POINT {
	public:
		ARRAY_POINT(int size) :size(size) {
			dian = new DIAN[size];
		}
		ARRAY_POINT(const ARRAY_POINT& di) {
			size = di.size;
			dian = new DIAN[size];
			for (int i = 0; i < size; i++) {
				dian[i] = di.dian[i];
			}
		}
		~ARRAY_POINT() {
			std::cout << "deleting ..." << std::endl;
			delete[]dian;
		}
		DIAN& elem(int index) {
			assert(index >= 0 && index < size);
			return dian[index];
		}
	private:
		DIAN* dian;
		int size;
	};
