#include <iostream>
using namespace std;

class ReleaseDate
{
	int day, month, year;

public:
	ReleaseDate();
	ReleaseDate(int d, int m, int y);
	~ReleaseDate();

	void setDate(int d, int m, int y);
	int getDay();
	int getMonth();
	int getYear();
};