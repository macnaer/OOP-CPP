//#include "Header.h"
//#include <vector>
//using namespace std;
//
//void main()
//{
//	vector <Gamer*> team;
//
//	int choice;
//	while (true)
//	{
//		cout << "1 - Archer\t2 - Mage\t3 - Swordsman\t0 - exit\n";
//		cin >> choice;
//
//		if (choice == 0)
//			break;
//		else if (choice == ARCHER)
//			team.push_back(new Archer());
//		else if (choice == 2)
//			team.push_back(new Mage());
//		else
//			team.push_back(new Swordsman());
//	}
//
//	for (auto el : team)
//	{
//		el->Play();
//	}
//	for (auto el : team)
//		delete el;
//	system("pause");
//}