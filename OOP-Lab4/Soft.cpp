#include "Soft.h"
#include <iostream>

Soft::Soft(char* title, Company* Company, Date creationDate) {
	this->title = new char[0];
	setTitle(title);
	setCompany(Company);
	setCreationDate(creationDate);
}

Soft::Soft(Soft& soft) {
	this->title = new char[0];
	setTitle(soft.getTitle());
	setCompany(&soft.getCompany());
	setCreationDate(soft.getCreationDate());
}

Soft::~Soft() {
	delete[] title;
}

char* Soft::getTitle() {
	return title;
}

Date Soft::getCreationDate() {
	return creationDate;
}

Company Soft::getCompany() {
	return *company;
}

void Soft::setTitle(char* newTitle) {
	delete[] title;
	int lenght = std::strlen(newTitle);
	title = new char[lenght + 1];
	strcpy_s(title, lenght, newTitle);
}

void Soft::setCompany(Company* newCompany) {
	company = newCompany;
}

void Soft::setCreationDate(Date newCreationDate) {
	creationDate = newCreationDate;
}

void Soft::print() {
	std::cout << "Soft:" << std::endl;
	std::cout << "\tTitle: " << getTitle() << std::endl;
	std::cout << "\tCompany: " << getCompany().getTitle() << std::endl;
	std::cout << "\tCreation Date: ";
	getCreationDate().print();
	std::cout << std::endl;
}
