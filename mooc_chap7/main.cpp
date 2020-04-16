
#include <iostream>
#include "RECTANGLE.h"
//#include "BASE1.h"
#include "INHERIT.h"
#include "MEMBER.h"
#include "VBASE.h"

using namespace std;
/*
void fun(BASE1* ptr) {
	ptr->display();
}
*/


int main() {
	RECTANGLE rect;
	MEMBER memb(1, 2, 3, 4);
	MEMBER* pMem = &memb;
	DERIVED d(1);
	d.var0 = 2;
	d.fun0();

	memb.var = 1;
	memb.func();
	memb.FATHER1::var = 5;
	pMem->FATHER1::func();
	pMem->FATHER2::var = 11;
	memb.FATHER2::func();

	C obj;
	obj.INHERIT::print();
	obj.print();
	/*
	BASE1 base1;
	BASE2 base2;
	DERIVED derived;
	fun(&base1);
	fun(&base2);
	fun(&derived);
	*/
	rect.initRectangle(2, 3, 20, 22);
	rect.move(3, 4);
	cout << rect.getX() << "," << rect.getY() << "," << rect.getW() << "," << rect.getH() << endl;
	return 0;
}