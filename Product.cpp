#include "Product.h"

Product::Product()
{
	name = nullptr;
	price = 0;
}

Product::Product(const char* n, int p, int d, int m, int y)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	name = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';

	price = p;

	date.setDate(d, m, y);
}

void Product::setData(const char* n, int p, int d, int m, int y)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	name = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';

	price = p;

	date.setDate(d, m, y);
}

void Product::display()
{
	cout << "Product : " << name << endl;
	cout << "Price : " << price << endl;
	cout << "Release Date : " << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << endl << endl;
}

Product::~Product()
{
	delete[] name;
	name = nullptr;
}