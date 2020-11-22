#include <iostream>
#include <string>

using namespace std;


class Person {
private:
	short age;
	string firstName;
	string lastName;

public:
	short GetAge() {
		return age;
	}

	void SetAge(short age) {
		if (age <= this->age || this->age >= 120) {
			cout << "Wrong input." << endl;
		}
		else {
			this->age = age;
		}
	}

	void CreatePerson() {
		cout << "Name: ";
		cin >> firstName;
		cout << "Last name: ";
		cin >> lastName;
		cout << "Age: ";
		cin >> age;
	}

	void Print() {
		cout << "Name: " << firstName << "\nLaste name: " << lastName << "\nAge: " << age << endl;
	}
};

int main() {

	Person firstPerson;
	firstPerson.CreatePerson();
	/*firstPerson.Print();*/
	cout << "Age: " << firstPerson.GetAge() << endl;
	firstPerson.SetAge(57);
	cout << "Age: " << firstPerson.GetAge() << endl;
	system("pause");
	return 0;
}