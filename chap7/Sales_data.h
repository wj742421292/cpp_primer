#pragma once

#include "..\chap1\Version_test.h"

#include <string>

struct Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);
public:
	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(std::istream&);

	std::string isbn()const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
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

