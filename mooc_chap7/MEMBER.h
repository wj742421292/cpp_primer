#pragma once

#include <iostream>

class FATHER1 {
public:
	FATHER1(int i) {
		std::cout << "constructing f1: " <<i << std::endl;
	}
	~FATHER1() {
		std::cout << "destructing f1: " << std::endl;
	}
	int var;
	void func() { std::cout << "member of f1" << std::endl; }
};

class FATHER2 {
public:
	FATHER2(int i) {
		std::cout << "constructing f2: " <<i <<std::endl;
	}
	~FATHER2() {
		std::cout << "destructing f2: " << std::endl;
	}
	int var;
	void func() { std::cout << "member of f2" << std::endl; }
};


class FATHER3 {
public:
	FATHER3() {
		std::cout << "constructing f3" << std::endl;
	}
	~FATHER3() {
		std::cout << "destructing f3: " << std::endl;
	}
	int var;
	void func() { std::cout << "member of f3" << std::endl; }
};

class MEMBER : public FATHER2, public FATHER1, public FATHER3
{
public:
	MEMBER(int a, int b, int c, int d):FATHER1(a), member1(b), member2(c), FATHER2(d){}
	int var;
	void func() { std::cout << "member of derived" << std::endl; }

private:
	FATHER1 member1;
	FATHER2 member2;
	FATHER3 member3;
};

