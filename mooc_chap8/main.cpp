#include "CLOCK.h"
#include "COMPLEX.h"
#include "../mooc_chap7/BASE1.h"

void fun(BASE1* ptr) {
	ptr->display();
}

void del(BASE1* b) {
	delete b;
}
using namespace std;

int main() {
	CLOCK clock(23, 59, 59);
	clock.showTime();
	(clock++).showTime();
	(++clock).showTime();
	//BASE1* pb = new BASE2();
	//del(pb);


	BASE2 base2;
	DERIVED derived;
	fun(&base2);
	fun(&derived);
	return 0;
}