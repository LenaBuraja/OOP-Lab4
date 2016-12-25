#include "Person.h"
#include <iostream>

Person::Person() {

}

Person::Person(char* name, char* surname) {
	this->name = new char[0];
	this->surname = new char[0];
	setName(name);
	setSurname(surname);
}

void Person::setName(char* newName) {
	delete[] name;
	name = new char[std::strlen(newName) + 1];
	strcpy(name, newName);
}

void Person::setSurname(char* newSurname) {
	delete[] surname;
	surname = new char[std::strlen(newSurname) + 1];
	strcpy(surname, newSurname);
}

char* Person::getName() {
	return name;
}

char* Person::getSurname() {
	return surname;
}

Person::~Person() {
	delete[] name;
	delete[] surname;
}

void Person::print() {
	std::cout << "Person:" << std::endl;
	std::cout << "\tName: " << getName() << " " << getSurname() << std::endl;
}
