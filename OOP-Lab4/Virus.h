#pragma once
#include "Soft.h"
#include "OS.h"

class Virus : public Soft {
	OS::type targetOS;
public:
	Virus(char* title, Company* company, Date creationDate, OS::type targetOS);
	OS::type getTargetOS();
	void setTargetOS(OS::type newtargetOS);
	void print();
};

