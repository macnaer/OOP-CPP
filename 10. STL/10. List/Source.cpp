#include <iostream>
#include <list>
#include <deque>
#include <vector>


using namespace std;


template <typename T>
void Print(const list<T> &lst) {
	for (auto i = lst.begin(); i != lst.end(); ++i) {
		cout << *i << endl;
	}
}

int main() {

#pragma region List
	/*list<int> lst;

	lst.push_back(10);
	lst.push_front(5);
	lst.push_front(25);
	lst.push_front(35);

	lst.sort();
	Print(lst);
	cout << lst.size() << endl;
	cout << "======================" << endl;
	lst.pop_front();

	Print(lst);
	cout << lst.size() << endl;
	lst.reverse();
	cout << "==========Reverse==========" << endl;
	Print(lst);*/
	#pragma endregion	

#pragma region Deque

	//deque<int> arrDeque = { 5,3,7,9,8 };
	//arrDeque.push_back(100);
	//arrDeque.push_front(200);

	//for (auto i = arrDeque.begin(); i != arrDeque.end(); ++i) {
	//	cout << *i << endl;
	//}
	#pragma endregion

#pragma region Vector
	vector<int> arrVector;
	arrVector.push_back(4);
	arrVector.push_back(5);
	arrVector.push_back(1);
	arrVector.push_back(9);

	for (int i = 0; i < arrVector.size(); i++) {
		cout << "arrVector => " << arrVector[i] << endl;
	}

	cout << "arrVector.at " << arrVector.at(2) << endl;
	cout << "arrVector size " << arrVector.size() << endl;
	cout << "arrVector capasity " << arrVector.capacity() << endl;
#pragma endregion


	system("pause");
	return 0;
}