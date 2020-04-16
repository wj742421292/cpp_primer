#include "source.h"
#include "DIAN.h"
#include <vector>
#include <string>

using namespace std;

int CallBack(int (*)(int, int), int, int);

int main() {
	int iRet = 0;
	char a[] = "abcd";
	char b[] = "cdef";
	string c = "abcd";
	string d = "cdef";
	cout << link(b, a) << endl;
	cout << c + d << endl;
	cout << d + d << endl;
	vector<int> v(10, 10);
	for (auto e : v)
		cout << e << endl;
	DIAN* ptr = new DIAN;
	delete ptr;
	ptr = new DIAN(3, 4);
	delete ptr;
	ARRAY_POINT points(3);
	points.elem(1).move(3, 4);
	points.elem(2).move(5, 8);
	iRet = CallBack(&mul, 11, 12);
	return iRet;
}


int CallBack(int(*f)(int,int), int m, int n) {
	return f(m, n);
}