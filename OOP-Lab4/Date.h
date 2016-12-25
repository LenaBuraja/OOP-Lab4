#pragma once

class Date {
	int day, month, year;
public:
	Date(int day, int month, int year);
	Date(Date& date);
	Date();
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int newDay);
	void setMonth(int newMonth);
	void setYear(int newYear);
	void print();
};
