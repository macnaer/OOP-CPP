#include "Header.h"
#include <vector>
using namespace std;

void main()
{
	vector <Gamer*> team;
	//enum Players {
	//	ARCHER = 1,
	//	MAGE = 2,
	//	SWARDSMAN = 3
	//};


	FabricMethodArcher fmA;
	FabricMethodMage fmM;
	FabricMethodSwordsman fmS;

	FabricMethod* factory[] = { &fmA, &fmM, &fmS };
	int choice;
	while (true)
	{
		cout << "1 - Archer\t2 - Mage\t3 - Swordsman\t0 - exit\n";
		cin >> choice;

		if (choice == 0 || choice >= 4)
			break;
		team.push_back(factory[choice - 1]->createPlayer((Players) choice));

	}

	for (auto el : team)
	{
		el->Play();
	}
	for (auto el : team)
		delete el;
	system("pause");
}