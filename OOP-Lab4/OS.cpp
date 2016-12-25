#include "OS.h"
#include <iostream>

void OS::printTypeOS(type targetOS) {
	switch (targetOS) {
	case Windows:
		std::cout << "Windows";
		break;
	case Linux:
		std::cout << "Linux";
		break;
	case Android:
		std::cout << "Android";
		break;
	case Unix:
		std::cout << "Unix";
		break;
	case DOS:
		std::cout << "DOS";
		break;
	default:
		std::cout << "Type has no setted";
		break;
	}
}