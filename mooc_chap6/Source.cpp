#include "source.h"

int max(int a, int b) {
	return (a > b) ? a : b;
}

int sum(int a, int b) {
	return a + b;
}

int mul(int a, int b){
	return a * b;
}


char* link(char* a, char* b) {
	int m = 0, n = 0;
	while (a[m] != '\0')
		m++;
	while (b[n] != '\0')
		n++;
	char* c = new char[m + n + 1];

	for (int i = 0; i < m; i++)
		c[i] = a[i];
	for (int i = m; i < m+n; i++)
		c[i] = b[i-m];
	c[m + n] = '\0';
	return c;
}