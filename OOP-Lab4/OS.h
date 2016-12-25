#pragma once

static class OS {
public:
	enum type {
		Windows,
		Linux,
		Android,
		Unix,
		DOS
	};
private:
	type targetOS;
public:
	static void printTypeOS(type targetOS);
};
