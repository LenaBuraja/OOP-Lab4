#include "Date.h"
#include <iostream>

Date::Date() : Date(1, 1, 1970) {

}

Date::Date(Date& date) : Date(date.getDay(), date.getMonth(), date.getYear()) {

}

Date::Date(int day, int month, int year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

void Date::setDay(int newDay) {
	day = newDay;
}

void Date::setMonth(int newMonth) {
	month = newMonth;
}

void Date::setYear(int newYear) {
	year = newYear;
}

void Date::print() {
	std::cout << getDay() << "." << getMonth() << "." << getYear();
}
