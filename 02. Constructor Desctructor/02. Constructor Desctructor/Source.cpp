#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Dog {
private:
	string name;
	int age;
	string breed;
	int* numbers;
public:
	Dog() {
		cout << "Default Dog constructor works..." << endl;
	}

	Dog(int size){
		numbers = new int[size];
		for (int i = 0; i < size; i++) {
			numbers[i] = rand() % 10 + 1;
		}
	}

	Dog(string name, int age, string breed) {
		this->name = name;
		this->age = age;
		this->breed = breed;
		cout << "Overload constructor works..." << endl;
	}
	void ShowNumbers(int size) {
		for (int i = 0; i < size; i++) {
			cout << "number [" << i << "] = " << numbers[i] << endl;
		}
	}

	void ShowDogInfo() {
		cout << "Name: " << this->name << "\nAge: " << this->age << "\nBreed: " << this->breed << endl;
	}
	~Dog() {
		cout << "Dog destructor works..." << endl;
		delete[] numbers;
	}
};


int main() {

	srand(unsigned(time(NULL)));

	Dog dog1("Bobik", 3, "Taxa");
	dog1.ShowDogInfo();

	Dog num(10);
	num.ShowNumbers(10);

	system("pause");
	return 0;
}