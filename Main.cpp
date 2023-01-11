#include "Product.h"

int main()
{
	Product p1("Shampoo", 200, 13, 9, 2022);

	p1.display();

	Product p2;

	p2.setData("Sabun", 110, 1, 5, 2021);

	p2.display();

	Product p3("Sarson ka tel", 180, 19, 2, 2023);

	p3.display();

	return 0;
}