#pragma once

#include <iostream>

class INHERIT
{
public:
	INHERIT() :i(0) {
		std::cout << "INHERIT default construct called" << std::endl;
	}
	INHERIT(int i) :i(i) {
		std::cout << "INHERIT constructor called" << std::endl;
	}
	~INHERIT() {
		std::cout << "INHERIT destructor called" << std::endl;
	}
	void print()const {
		std::cout << i << std::endl;
	}
private:
	int i;
};

class C:public INHERIT {
public:
	C() :c(0) {
		std::cout << "c's default constructor called" << std::endl;
	}
	C(int i, int j) :INHERIT(i), c(j) {
		std::cout << "c's constructor called" << std::endl;
	}
	~C() {
		std::cout << "c's descontructor called" << std::endl;
	}
	void print()const {
		INHERIT::print();
		std::cout << c << std::endl;
	}
private:
	int c;
};

