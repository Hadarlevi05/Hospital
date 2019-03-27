#include "DateTime.h"


DateTime::DateTime(int year, int month, int day, int hour, int min) {

	setYear(year);
	setMonth(month);
	setDay(day);
	setHour(hour);
	setMin(minutes);
}


bool DateTime::setYear(int Year)
{
	if (Year > 999 && year < 10000)
	{
		year = Year;
		return true;

	}
	else
	{
		return false;
	}

}
bool DateTime::setMonth(int Month)
{
	if (Month >= 1 && Month <= 12)
	{
		month = Month;
		return true;

	}
	else
	{
		return false;
	}
}
bool DateTime::setDay(int Day)
{
	if (Day >= 1 && Day <= 31)
	{
		day = Day;
		return true;

	}
	else
	{
		return false;
	}
}
bool DateTime::setHour(int Hour)
{
	if (Hour >= 1 && Hour <= 23)
	{
		hour = Hour;
		return true;

	}
	else
	{
		return false;
	}

}
bool DateTime::setMin(int Minutes)
{
	if (Minutes >= 1 && Minutes <= 60)
	{
		minutes = Minutes;
		return true;

	}
	else
	{
		return false;
	}

}


int DateTime::getYear() const
{
	return year;

}
int DateTime::getMonth() const
{
	return month;
}
int DateTime::getDay() const
{
	return day;
}
int DateTime::getHour() const
{
	return hour;
}
int DateTime::getMin() const
{
	return minutes;
}















//#include <iostream>
//using namespace std;
//#include <string>
//
//#include "DateTime.h"
//
//DateTime::DateTime()
//{
//}
//
//
//DateTime::DateTime(int Year, int Month, int Day, int Hour, int Min)
//{
//	year = Year;
//	month = Month;
//	day = Day;
//	hour = Hour;
//	minutes = Min;
//}
//
//DateTime::DateTime(const DateTime & other)
//{
//}
//
//
//DateTime::~DateTime()
//{
//}
//
//int DateTime::getDay() const
//{
//	return day;
//}
//
//int DateTime::getMonth() const
//{
//	return month;
//}
//
//int DateTime::getYear() const
//{
//	return year;
//}
//
//int DateTime::getHour() const
//{
//	return hour;
//}
//
//int DateTime::getMin() const
//{
//	return minutes;
//}
