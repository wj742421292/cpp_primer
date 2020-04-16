#pragma once

#include <iostream>

enum RAM_TYPE{DDR2=2, DDR3, DDR4, DDR5};

class RAM
{
	enum RAM_TYPE type;
	unsigned frequency;	//MHz
	unsigned size;	//GB

public:
	RAM(RAM_TYPE type, unsigned f, unsigned s) :type(type), frequency(f), size(s) {
		std::cout << "construct a RAM" << std::endl;
	}
	RAM(const RAM& r) = delete;
	~RAM() { std::cout << "destruct a RAM!" << std::endl; }

	RAM_TYPE getType()const { return type; }
	unsigned getFrequency()const { return frequency; }
	unsigned getSize()const { return size; }

	void setType(RAM_TYPE);
	void setFrequency(unsigned);
	void setSize(unsigned);

	void run() { std::cout << "RAM start running" << std::endl; }
	void stop() { std::cout << "RAM stop running" << std::endl; }
};

