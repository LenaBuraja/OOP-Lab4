#include "Word.h"
#include <iostream>

Word::Word(int version)
	: TextEditor("Word", new Company("Microsoft"), Date(12, 8, version), ".doc") {
	setVersion(version);
}

int Word::getVersion() {
	return version;
}

void Word::setVersion(int newVersion) {
	version = newVersion;
	if (version > 2010) {
		setDefaultFormat(".docx");
	}
	else {
		setDefaultFormat(".doc");
	}
	setCreationDate(Date(30, 7, version));
}

void Word::print() {
	std::cout << "Word:" << std::endl;
	std::cout << "\tVersion: " << getVersion() << std::endl;
	TextEditor::print();
}
