#ifndef __DATETIME_H
#define __DATETIME_H


class DateTime
{

private:

	int year;
	int month;
	int day;
	int hour;
	int minutes;

public:
	DateTime() = default;
	DateTime(int year, int month, int day, int hour = 0, int min = 0);


	bool setYear(int year);
	bool setMonth(int month);
	bool setDay(int day);
	bool setHour(int hour);
	bool setMin(int min);


	int getYear() const;
	int getMonth() const;
	int getDay() const;
	int getHour() const;
	int getMin() const;

};




#endif