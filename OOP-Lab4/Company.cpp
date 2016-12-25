#include "Company.h"
#include <iostream>
#include <cstring>


Company::Company(char* title) {
	this->title = new char[0];
	setTitle(title);
}

Company::Company(Company& cp) : Company(cp.getTitle()) {

}

void Company::setTitle(char* newTitle) {
	delete[] title;
	title = new char[std::strlen(newTitle) + 1];
	strcpy(title, newTitle);
}

char* Company::getTitle() {
	return title;
}

Company::~Company() {
	delete[] title;
}
