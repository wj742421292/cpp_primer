#pragma once

#include <iostream>

enum CDROM_Interface{SATA, USB};
enum CDROM_INSTALL{external, build_in};
class CDROM
{
	enum CDROM_Interface interface;
	enum CDROM_INSTALL install;
	unsigned cache;

public:
	CDROM(CDROM_Interface inter, CDROM_INSTALL ins, unsigned size) :
		interface(inter), install(ins), cache(size) {
		std::cout << "construct a CD-ROM" << std::endl;
	}
	~CDROM() { std::cout << "destruct a CD-ROM!" << std::endl; }

	CDROM_Interface getInterface()const { return interface; }
	CDROM_INSTALL getInstall()const { return install; }
	unsigned getCache()const { return cache; }

	void setInterface(CDROM_Interface);
	void setInstall(CDROM_INSTALL);
	void setCache(unsigned);
	void run() { std::cout << "CD-ROM start running" << std::endl; }
	void stop() { std::cout << "CD-ROM stop running" << std::endl; }

};

