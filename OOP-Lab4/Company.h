//класс замещащий класс Developer

#pragma once

class Company {
	char* title;
public:
	Company(char* title);
	Company(Company& cp);
	void setTitle(char* newTitle);
	char* getTitle();
	~Company();
};

