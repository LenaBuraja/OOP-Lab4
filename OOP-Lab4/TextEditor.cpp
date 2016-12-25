#include "TextEditor.h"
#include <iostream>

TextEditor::TextEditor(char* title, Company* company, Date creationDate, char* defaultFormat)
	: Soft(title, company, creationDate) {
	this->defaultFormat = new char[0];
	setDefaultFormat(defaultFormat);
}

TextEditor::TextEditor(TextEditor& textEditor)
	: Soft(textEditor.getTitle(), &textEditor.getCompany(), textEditor.getCreationDate()) {
	this->defaultFormat = new char[0];
	setDefaultFormat(textEditor.getDefaultFormat());
}

TextEditor::~TextEditor() {
	delete[] defaultFormat;
}

char* TextEditor::getDefaultFormat() {
	return defaultFormat;
}

void TextEditor::setDefaultFormat(char* newDefaultFormat) {
	delete[] defaultFormat;
	int lenght = std::strlen(newDefaultFormat);
	defaultFormat = new char[lenght + 1];
	strcpy_s(defaultFormat, lenght, newDefaultFormat);
}

void TextEditor::print() {
	std::cout << "TextEditor:" << std::endl;
	std::cout << "\tTitle: " << getTitle() << std::endl;
	std::cout << "\tCompany: " << getCompany().getTitle() << std::endl;
	std::cout << "\tCreation Date: ";
	getCreationDate().print();
	std::cout << std::endl;
	std::cout << "\tDefault text type: " << getDefaultFormat() << std::endl;
}
