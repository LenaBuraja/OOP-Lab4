#include "Student.h"
#include <iostream>

Student::Student(char* name, char* surname, char* university) : Person(name, surname) {
	this->university = new char[0];
	setUniversity(university);
}

void Student::setUniversity(char* newUniversity) {
	delete[] university;
	university = new char[std::strlen(newUniversity) + 1];
	strcpy(university, newUniversity);
}

char* Student::getUniversity() {
	return university;
}

Student::~Student() {
	delete[] university;
}

void Student::print() {
	std::cout << "Student:" << std::endl;
	std::cout << "\tUniversity: " << getUniversity() << std::endl;
	Person::print();
}
