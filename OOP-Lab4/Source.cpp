#include "Word.h"
#include "Virus.h"
#include "Minesweeper.h"
#include <iostream>

void main() {

	Word myWord(2009);
	myWord.print();
	system("pause");

	std::cout << " --- Let's change version of Word!" << std::endl;
	myWord.setVersion(2012);
	myWord.print();
	system("pause");

	Company wargame("Wargaming");
	Game wot("World of Tanks", &wargame, Date(12, 8, 2010), Game::Type::mmo);
	wot.print();
	system("pause");

	Minesweeper sapper(0);
	sapper.print();
	system("pause");

	Company developerVirus("Robert Tappan Morris");
	Virus myVirus("Slapper", &developerVirus, Date(13, 9, 2002), OS::Linux);
	myVirus.print();
	system("pause");

}
