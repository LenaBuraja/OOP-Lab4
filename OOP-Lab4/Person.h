//ромбовидное неследование. Person - Developer and Student - StudentDeveloper
//абстрактный класс virtual void print() = 0;

#pragma once

class Person {
	char* name;
	char* surname;
public:
	Person();
	Person(char* name, char* surname);
	void setName(char* newName);
	void setSurname(char* newSurname);
	char* getName();
	char* getSurname();
	~Person();
	virtual void print() = 0;
};

