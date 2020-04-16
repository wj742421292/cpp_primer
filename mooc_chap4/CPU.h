#pragma once

#include <iostream>

enum CPU_RANK{P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
	CPU_RANK rank;
	int frequency;
	float voltage;

public:
	CPU(CPU_RANK r, int f, float v) :rank(r), frequency(f), voltage(v) {
		std::cout << "construct a CPU" << std::endl;
	}
	CPU(const CPU& c) {
		rank = c.rank;
		frequency = c.frequency;
		voltage = c.voltage;
		std::cout << "calling copy construct" << std::endl;
	}
	~CPU() { std::cout << "destruct a CPU!" << std::endl; }


	CPU_RANK getRank()const { return rank; }
	int getFrequency()const { return frequency; }
	float getVoltage()const { return voltage; }

	void setRank(CPU_RANK);
	void setFrequency(int);
	void setVlotage(float);

	void run() { std::cout << "CPU start running" << std::endl; }
	void stop() { std::cout << "CPU stop running" << std::endl; }
};

