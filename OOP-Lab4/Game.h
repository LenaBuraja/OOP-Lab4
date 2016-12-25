// ласс содержит статический вложенный класс

#pragma once
#include "Soft.h"

class Game : public Soft {
public:
	static class Type {
	public:
		enum Genre {
			action,
			adventure,
			rolePlaying,
			simulation,
			puzzle,
			strategy,
			mmo
		};
		static void printGenreName(Genre genre);
	};
private:
	Type::Genre genre;
public:
	Game(char* title, Company* company, Date creationDate, Type::Genre genre);
	Type::Genre getGenre();
	void setGenre(Type::Genre newGenre);
	void print();
};
