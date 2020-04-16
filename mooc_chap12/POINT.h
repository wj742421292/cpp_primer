#pragma once

#include <iostream>
#include <string>


class MyException
{
public:
	MyException(const std::string& msg) :msg(msg) {}
	~MyException() {}

	const std::string& getMsg()const { return msg; }

private:
	std::string msg;
};


class Demo {
public:
	Demo() { std::cout << "Constructor of Demo" << std::endl; }
	~Demo() { std::cout << "Destructor of Demo" << std::endl; }
};

