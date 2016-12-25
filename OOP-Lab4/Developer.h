//ромбовидное неследование. Person - Developer and Student - StudentDeveloper

#pragma once
#include "Person.h"

class Developer : Person {
	int experience;
public:
	Developer(char* name, char* surname, int experience);
	Developer(Developer& dever);
	//~Developer();
	int getExperience();
	void setExperience(int newExperince);
	void print();
protected:
	Developer(int experience);
};
