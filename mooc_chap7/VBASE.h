#pragma once

#include <iostream>


class VBASE
{
public:
	VBASE(int var) :var0(var){}
	int var0;
	void fun0() {
		std::cout << "member of base0" << std::endl;
	}
};

class BASE1: virtual public VBASE
{
public:
	BASE1(int var) :VBASE(var){}
	int var1;
};
class BASE2: virtual public VBASE
{
public:
	BASE2(int var) :VBASE(var){}
	int var2;
};

class DERIVED :public BASE1, public BASE2 {
public:
	DERIVED(int var):VBASE(var), BASE1(var), BASE2(var){}
	int var;
	void fun() {
		std::cout << "member of derived" << std::endl;
	}
};
