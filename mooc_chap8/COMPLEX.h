#pragma once

#include <iostream>


class COMPLEX
{
public:
	COMPLEX(double r=0.0, double i=0.0) :real(r), imag(i) {}
	friend COMPLEX operator+(const COMPLEX& lhs, const COMPLEX& rhs);
	friend COMPLEX operator-(const COMPLEX& lhs, const COMPLEX& rhs);
	friend std::ostream& operator<<(std::ostream& out, const COMPLEX& hs);
	void display()const;
private:
	double real, imag;
};

