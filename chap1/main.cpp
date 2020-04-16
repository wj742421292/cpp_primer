#include<iostream>
#include"Sales_item.h"

using namespace std;
int main()
{
	Sales_item book, book1, book2;
	/*
	cin >> book1>> book2;
	if (book1.isbn() == book2.isbn())
		cout << book1 + book2 << endl;
	else
		cerr << "data must refer the same ISBN" << endl;
		*/
	if (cin >> book)
	{
		Sales_item trans;
		while (cin >> trans)
		{
			if (book.isbn() == trans.isbn())
				book += trans;
			else {
				cout << book << endl;
				book = trans;
			}
		}
		cout << book << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}

	return 0;
}
