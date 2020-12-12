<<<<<<< HEAD
#include <iostream>
#include <string>

=======
#include<iostream>
#include<string>
>>>>>>> aa22c8d3a3a636e4f4bfcea51c815750071e7aa9

using namespace std;

class Animal {
protected:
	string name;
<<<<<<< HEAD
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
=======
	string breed;
	int age;

public:

	Animal(string name, string breed, int age) {
		cout << "Animal constructor... " << endl;
		this->name = name;
		this->breed = breed;
		this->age = age;
	}

	void ShowAnimal() {
		cout << "Name: " << this->name << "\nBreed: " << this->breed << "\nAge: " << this->age << endl;
	}

	void Eat() {
		cout << this->name << " eating...." << endl;
	}

	void Sleep() {
		cout << this->name << " sleeping...." << endl;
	}
};

class Dog : public Animal {
public:
	int power;

	Dog(string name, string breed, int age, int power):Animal(name,breed,age)
	{
		cout << "Dog constructor... " <<endl;
		this->power = power;
	}

	void Hunt() {
		cout << this->name << " hunting..." << endl;
	}

	void ShowAnimal() {
		cout << "Name: " << this->name << "\nBreed: " << this->breed 
			<< "\nAge: " << this->age << "\nPower: " << this->power << endl;
	}

};

class Cat: public Animal {
public:

	int speed;

	Cat(string name, string breed, int age, int speed ):Animal(name, breed, age)
	{
		cout << "Cat constructor... " << endl;
		this->speed = speed;
	}


	void ShowAnimal() {
		cout << "Name: " << this->name << "\nBreed: " << this->breed
			<< "\nAge: " << this->age << "\nSpeed: " << this->speed << endl;
	}

	void CatchMouse() {
		cout << this->name << " catching mouse " << endl;
	}
};

class CatDog : public Dog, Cat {

public:
	CatDog(string name, string breed, int age, int power, int speed) :Dog(name,breed, age, power), Cat(name, breed, age, speed) {
		cout << "CatDog constructor ...." << endl;
	}

	void ShowAnimal() {
		cout << "Name: " << this->Dog::name << "\nBreed: " << this->Cat::breed
			<< "\nAge: " << this->Dog::age << "\nPower: " << this->power << "\nSpeed: " << this->speed << endl;
	}
};

int main() {

	//Dog sharik("Sharik", "Taxa", 3, 87);
	//sharik.ShowAnimal();
	//sharik.Sleep();
	//sharik.Eat();
	//sharik.Hunt();
	//cout << "*************************" << endl;
	//Cat murzik("Murzik", "Sphinks", 4, 86);
	//murzik.ShowAnimal();
	//murzik.Sleep();
	//murzik.Eat();
	//murzik.CatchMouse();

	CatDog catdog("CatDog", "Pokruch", 5, 78, 34);
	catdog.ShowAnimal();
>>>>>>> aa22c8d3a3a636e4f4bfcea51c815750071e7aa9

	system("pause");
	return 0;
}