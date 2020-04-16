#include "CLOCK.h"


CLOCK::CLOCK(int hour, int min, int sec) {
	if (0 <= hour && hour < 24 && 0 <= min && min < 60 && 0 <= sec && sec < 60) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
	else
		std::cout << "Time error" << std::endl;
}

void
CLOCK::showTime() const{
	std::cout << hour << ":" << min << ":" << sec << std::endl;
}

CLOCK&
CLOCK::operator++() {
	sec++;
	if (sec >= 60) {
		sec -= 60;
		min++;
		if (min >= 60) {
			min -= 60;
			hour = (hour + 1) % 24;
		}
	}
	return *this;
}

CLOCK
CLOCK::operator++(int) {
	CLOCK old = *this;
	++(*this);
	return old;
}
