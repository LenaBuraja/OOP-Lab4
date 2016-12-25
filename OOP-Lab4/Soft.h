//Абстрактный класс virtual void print() = 0;

#pragma once
#include "Date.h"
#include "Company.h"

class Soft {
	char* title;
	Date creationDate;
	Company* company;
public:
	Soft(char* title, Company* company, Date creationDate);
	Soft(Soft& soft);
	~Soft();
	char* getTitle();
	Date getCreationDate();
	Company getCompany();
	void setTitle(char* newTitle);
	void setCreationDate(Date newCreationDate);
	void setCompany(Company* newCompany);
	virtual void print() = 0;
};
