#pragma once

#include "Sales_data.h"
#include <iostream>

using namespace std;

double
Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data&
Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream&
read(istream& is, Sales_data& item)
{
	double price = 0;
	cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream&
print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << "\t" << item.units_sold << "\t" << item.revenue << "\t" << item.avg_price();
	return os;
}

Sales_data
add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(istream& is)
{
	read(is, *this);
}
