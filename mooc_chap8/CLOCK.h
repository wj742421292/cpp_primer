#pragma once

#include <iostream>

class CLOCK
{
public:
	CLOCK(int hour=0, int min = 0, int sec = 0);//hour(hour), min(min), sec(sec){}
	void showTime()const;
	CLOCK& operator++();
	CLOCK operator++(int);
private:
	int hour, min, sec;
};

