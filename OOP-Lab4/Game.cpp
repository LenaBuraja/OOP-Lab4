#include "Game.h"
#include <iostream>

Game::Game(char* title, Company* company, Date creationDate, Type::Genre genre)
	: Soft(title, company, creationDate) {
	this->genre = genre;
}

Game::Type::Genre Game::getGenre() {
	return genre;
}

void Game::setGenre(Type::Genre newGenre) {
	genre = newGenre;
}

void Game::print() {
	std::cout << "Game:" << std::endl;
	std::cout << "\tGenre: ";
	Type::printGenreName(genre);
	std::cout << std::endl;
	Soft::print();
}

void Game::Type::printGenreName(Genre genre) {
	switch (genre) {
	case action:
		std::cout << "Action";
		break;
	case adventure:
		std::cout << "Adventure";
		break;
	case rolePlaying:
		std::cout << "Role-Playing";
		break;
	case simulation:
		std::cout << "Simulation";
		break;
	case puzzle:
		std::cout << "Puzzle";
		break;
	case strategy:
		std::cout << "Strategy";
		break;
	case mmo:
		std::cout << "Massively Multiplayer Online";
		break;
	default:
		std::cout << "Name has no setted";
		break;
	}
}
