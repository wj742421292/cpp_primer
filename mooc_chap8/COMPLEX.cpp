#include "COMPLEX.h"

COMPLEX 
operator+(const COMPLEX& lhs, const COMPLEX& rhs) {
	return COMPLEX(lhs.real + rhs.real, lhs.imag + rhs.imag);
}
COMPLEX 
operator-(const COMPLEX& lhs, const COMPLEX& rhs) {
	return COMPLEX(lhs.real - rhs.real, lhs.imag - rhs.imag);
}

std::ostream&
operator<<(std::ostream& out, const COMPLEX& hs) {
	out << "(" << hs.real << "," << hs.imag << ")";
	return out;
}
void
COMPLEX::display()const {
	std::cout << "(" << real << "," << imag << ")" << std::endl;
}
//COMPLEX 
//COMPLEX::operator+(const COMPLEX& rhs) {
//	return COMPLEX(real + rhs.real, imag + rhs.imag);
//}
//COMPLEX 
//COMPLEX::operator-(const COMPLEX& rhs) {
//	return COMPLEX(real - rhs.real, imag - rhs.imag);
//}

