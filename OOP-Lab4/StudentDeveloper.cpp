#include "StudentDeveloper.h"
#include <iostream>

StudentDeveloper::StudentDeveloper(char* name, char* surname, char* university, int experience) :
	Student(name, surname, university),
	Developer(experience) {

}

StudentDeveloper::~StudentDeveloper() {

}

void StudentDeveloper::print() {
	Student::print();
	std::cout << "Developer:" << std::endl;
	std::cout << "\tExperience: " << getExperience() << std::endl;
}
