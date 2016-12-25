#include "Developer.h"
#include <iostream>

Developer::Developer(char* name, char* surname, int experience) : Person(name, surname) {
	setExperience(experience);
}

Developer::Developer(Developer& dever) : Developer(dever.getName(), dever.getSurname(), dever.getExperience()) {

}

Developer::Developer(int experience) {
	setExperience(experience);
}

int Developer::getExperience() {
	return experience;
}

void Developer::setExperience(int newExperience) {
	experience = newExperience;
}

void Developer::print() {
	Person::print();
	std::cout << "Developer:" << std::endl;
	std::cout << "\tExperience: " << getExperience() << std::endl;
}
