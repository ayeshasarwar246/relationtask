#include "ReleaseDate.h"

class Product
{
	char* name;
	int price;
	ReleaseDate date;

public:
	Product();
	Product(const char* n, int p, int d, int m, int y);
	~Product();
	void setData(const char* name, int p, int d, int m, int y);
	
	void display();
};