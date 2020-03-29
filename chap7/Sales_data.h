#pragma once

#include "..\chap1\Version_test.h"

#include <string>

struct Sales_data {
	std::string isbn()const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

	std::string bookNo;
#ifdef IN_CLASS_INITS
	unsigned units_sold = 0;
	double revenue = 0.0;
#else

	unsigned units_sold;
	double revenue;
#endif
};

//non-member function
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

