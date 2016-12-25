#pragma once
#include "TextEditor.h"

class Word : public TextEditor {
	int version;
public:
	Word(int version);
	int getVersion();
	void setVersion(int newVersion);
	void print();
};
