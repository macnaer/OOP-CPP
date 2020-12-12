#include <iostream>
#include <string>


using namespace std;

class Animal {
protected:
	string name;
	int age;
	string breed;
};

class Dog : public Animal {
public: 
	int power;
	void Hunt() {
		cout << this->name << " is playing" << endl;
	}
};


int main() {

	Dog dog;
	dog.Hunt();

	system("pause");
	return 0;
}