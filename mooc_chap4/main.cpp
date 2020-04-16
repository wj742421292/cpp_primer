#include "Line.h"
#include "ExanInfo.h"
#include "CPU.h"
#include "RAM.h"
#include "CDROM.h"
#include "COMPUTER.h"

using namespace std;

void fun1(Point p) {
	cout << p.getX() << endl;
	//(3);
}

Point fun2() {
	Point a(2,30);
	Point* pa = &a;
	return a;
}

int main() {
	Point myp1(1, 1), myp2(4, 5);
	Line line(myp1, myp2);
	Line line2(line);
	cout << "the length of the line is: ";
	cout << line.getLen() << endl;
	cout << "the length of the line2 is: ";
	cout << line2.getLen() << endl;

	fun1(myp1);
	myp2 = fun2();
	cout << myp2.getX() << endl;
	ExamInfo course1("English", 'B');
	ExamInfo course2("Math", true);
	ExamInfo course3("CPP", 66);
	course1.show();
	course2.show();
	course3.show();

	CPU a(P6, 600, 3.6);
	a.run();
	a.stop();
	cout << "***********************\n";
	RAM b(DDR3, 1660, 8);
	b.run();
	b.stop();
	cout << "***********************\n";

	CDROM c(SATA, build_in, 500);
	c.run();
	c.stop();
	cout << "***********************\n";

	COMPUTER mycomp(a, b, c, 500, 1024);
	cout << "***********************\n";
	mycomp.run();
	mycomp.stop();

	cout << "***********************\n";


	return 0;
}