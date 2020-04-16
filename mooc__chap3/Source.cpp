
#include <iostream>

using namespace std;

int cpp() {
#ifdef __cplusplus
	cout << "hello, cpp!" << endl;
#else
	cout << "hi~, .c" << endl;
#endif
	return 0;
}