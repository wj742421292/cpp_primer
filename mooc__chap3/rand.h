#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>

int rollDice()
{
	int p1 = 0, p2 = 0;
	p1 = rand() % 6 + 1;
	p2 = rand() % 6 + 1;
	int sum = p1 + p2;
	std::cout << "player scores: " << p1 << "+" << p2 << "=" << p1 + p2 << std::endl;

	return sum;
}


