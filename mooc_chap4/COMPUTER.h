#pragma once

#include "CDROM.h"
#include "CPU.h"
#include "RAM.h"

class COMPUTER
{
	CPU mycpu;
	RAM myram;
	CDROM my_cdrom;

	unsigned storge;
	unsigned bandwidth;

public:
	COMPUTER(CPU cpu, RAM ram, CDROM cdrom, unsigned s, unsigned b);
	~COMPUTER() { std::cout << "destruct a COMPUTER!" << std::endl; }

	void run() {
		mycpu.run();
		myram.run();
		my_cdrom.run();
		std::cout << " computer start running" << std::endl;
	}
	void stop() {
		mycpu.stop();
		myram.stop();
		my_cdrom.stop();
		std::cout << " computer stop running" << std::endl;
	}
};

COMPUTER::COMPUTER(CPU cpu, RAM ram, CDROM cdrom, unsigned s, unsigned b) :
	mycpu(cpu), myram(ram), my_cdrom(cdrom), storge(s), bandwidth(b) {
	std::cout << "construct a COMPUTER" << std::endl;
}

