//ромбовидное неследование. Person - Developer and Student - StudentDeveloper

#pragma once
#include "Person.h"

class Student : public Person {
	char* university;
public:
	Student(char* name, char* surname, char* university);
	void setUniversity(char* newUniversity);
	char* getUniversity();
	~Student();
	void print();
};

