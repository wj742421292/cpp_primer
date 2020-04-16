
#include <iostream>
#include "combin.h"
//×éºÏ
int combin(int n, int k) {
	if (k > n)	return 0;
	if (n == k || k == 0)
		return 1;
	else
		//std::cout << k << std::endl;
		return combin(n - 1, k) + combin(n - 1, k - 1);
}

void move(char src, char des) {
	std::cout << src << "-->" << des << std::endl;
}
void hanoi(int n, char src, char mid, char des) {
	if (n == 1)
		move(src, des);
	else {
		hanoi(n - 1, src, des, mid);	//move n-1 to mid, 
		move(src, des);	//the left one to des
		hanoi(n - 1, mid, src, des);
	}
}