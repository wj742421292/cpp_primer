#include "POINT.h"
#include <cmath>
#include <stdexcept>

using namespace std;
double area(double, double, double);

void func() throw(MyException) {
	Demo d;
	cout << "Throw MyException in func()" << endl;
	throw MyException("exception thrown by func()");
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	try {
		cout<<area(a, b, c)<<endl;
	}
	catch (exception & e) {
		cout << "Error: " << e.what() << endl;
	}
	cout << "In main function" << endl;
	try {
		func();
	}
	catch (MyException & e) {
		cout << "Caught an exception:" << e.getMsg() << endl;
	}
	cout << "resume the execution of main()" << endl;
	return 0;
}

double area(double a, double b, double c) throw(invalid_argument) {
	if (a <= 0 || b <= 0 || c <= 0)
		throw invalid_argument("the side length should be positive");
	if (a + b <= c || a + c <= b || b + c <= a)
		throw invalid_argument("the side length should fit the triangle inequation");
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
