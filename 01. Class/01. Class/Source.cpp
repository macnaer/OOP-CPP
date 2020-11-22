#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	int age;
	string name;
	string surName;
	void Print() {
		cout << "Name: " << name << "\nSurname: " << surName << "\nAge: " << age << endl;
	}
	Person() {
		cout << "Person constrictor " << endl;
	}
// Get Set
// Constructor
private:
protected:
};

int main() {

#pragma region Example_1
	Person firstPerson;
	cout << "Name: ";
	cin >> firstPerson.name;
	cout << "Surname: ";
	cin >> firstPerson.surName;
	cout << "Age: ";
	cin >> firstPerson.age;
	//cout << "Name: " << firstPerson.name << "\nSurname: " << firstPerson.surName << "\nAge: " << firstPerson.age << endl;
	firstPerson.Print();
#pragma endregion

	

	system("pause");
	return 0;
}