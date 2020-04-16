#pragma once

#include<iostream>

class BASE1
{
public:
	virtual void display()const = 0;
	virtual ~BASE1() {
		std::cout << "BASE1 Destructor called" << std::endl;
	}
};

class BASE2:public BASE1
{
public:
	virtual void display()const override; 
	BASE2() {
		p = new int(10);
	}
	virtual ~BASE2() {
		std::cout << "BASE2 Destructor called" << std::endl;
		delete p;
	}
private:
	int* p;
};

class DERIVED final:public BASE2
{
public:
	virtual void display()const override final;
};



