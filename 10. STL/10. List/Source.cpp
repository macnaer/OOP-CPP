#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
void PrintList(const list<T> &lst) {
	for (auto i = lst.begin(); i != lst.end(); ++i) {
		cout << *i << endl;
	}
}

template <typename T>
void PrintDeque(const deque<T> &dq) {
	for (auto i = dq.begin(); i != dq.end(); ++i) {
		cout << *i << endl;
	}
}

template <typename T>
void PrintVector(const vector<T> &vect) {
	/*for (auto i = vect.begin(); i != vect.end(); ++i) {
		cout << *i << endl;
	}*/
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << endl;
	}
}

int main() {

#pragma region List
	//list<int> lst = {1,7,9};
	//list<int>::iterator it = lst.begin();
	//
	//PrintList(lst);
	//cout << "===========Print default list=========" << endl;
	//lst.push_back(8);
	//PrintList(lst);
	//cout << "===========Print push back=========" << endl;
	//lst.push_front(10);
	//PrintList(lst);
	//cout << "===========Print push front=========" << endl;
	//cout << "List size = " << lst.size() << endl;
	//lst.sort();
	//PrintList(lst);
	//cout << "===========Print sort list=========" << endl;
	////lst.reverse();
	////PrintList(lst);
	////cout << "===========Print reverse list=========" << endl;
	//lst.pop_back();
	//PrintList(lst);
	//cout << "===========Print remove last=========" << endl;
	//advance(it, 2);
	//lst.insert(it,100);
	//lst.insert(it, 100);
	//PrintList(lst);
	//cout << "===========Print insert by iterator=========" << endl;
	//lst.remove(100);
	//PrintList(lst);
	//cout << "===========Print delete by value=========" << endl;
	//cout << "Iterator position => " << *it << endl;
	///*advance(it, 1);*/
	//--it;
	//--it;
	//cout << "Iterator position => " << *it << endl;
	//lst.erase(it);
	//PrintList(lst);
	//cout << "===========Print erase by iterator=========" << endl;

#pragma endregion
#pragma region Vector
	//vector<int> vect = { 5,1,4 };
	//PrintVector(vect);
	//cout << "=============Print defaut vector==============" << endl;
	//vect.push_back(30);
	//PrintVector(vect);
	//cout << "=============Print push_back==============" << endl;
	////cout << "vector => " << vect.at(2) << endl;
	//PrintVector(vect);
	//cout << "=============Print replace by hardcode==============" << endl;
	//vector<int>::iterator it = vect.begin();
	//vect.insert(it + 1, 4);
	//PrintVector(vect);
	//cout << "=============Print incert==============" << endl;



#pragma endregion

#pragma region Deque

	deque<int> dq = { 7 ,3,4,7,8,9 };

	PrintDeque(dq);
	cout << "==============Print default duque=========" << endl;
	dq.push_back(10);
	dq.push_front(20);
	PrintDeque(dq);
	cout << "==============Print push_back push_front==============" << endl;
	dq.insert(dq.begin() + 2, 10);
	PrintDeque(dq);
	cout << "==============Print incert==============" << endl;
	dq.erase(dq.begin() + 1);
	PrintDeque(dq);
	cout << "==============Delete incert==============" << endl;


#pragma endregion



	system("pause");
	return 0;
}