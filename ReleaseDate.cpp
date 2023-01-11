#include "ReleaseDate.h"

ReleaseDate::ReleaseDate()
{
	day = 0;
	month = 0;
	year = 0;
}

ReleaseDate::ReleaseDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

void ReleaseDate::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

int ReleaseDate::getDay()
{
	return day;
}

int ReleaseDate::getMonth()
{
	return month;
}

int ReleaseDate::getYear()
{
	return year;
}

ReleaseDate::~ReleaseDate()
{

}