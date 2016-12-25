//ромбовидное неследование. Person - Developer and Student - StudentDeveloper

#pragma once
#include "Developer.h"
#include "Student.h"

class StudentDeveloper : public Student, public Developer {
public:
	StudentDeveloper(char* name, char* surname, char* university, int experience);
	~StudentDeveloper();
	void print();
};

