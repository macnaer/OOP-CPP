#include <iostream>
#include <string>
#include <ctime>

using namespace std;


class CarFactory {
public:
	static int CarsCount;
	string model;
	string vendor;
	string engine;
	int price;
	CarFactory(string vendor, string model, string engine, int price) {
		this->CarsCount++;
		this->vendor = vendor;
		this->model = model;
		this->engine = engine;
		this->price = price;
	}

	void ShowCarInfo() {
		cout << "Vendor: " << this->vendor << "\nModel: " << this->model << "\nEngine: " << this->engine
			<< "\nPrice: " << this->price << "\nCar Number: " << this->CarsCount << endl;
	}
};

int CarFactory::CarsCount = 0;
int main() {

	CarFactory car1("Audi", "A5", "Deisel", 1200);
	car1.ShowCarInfo();

	CarFactory car2("Audi", "A4", "Deisel", 1000);
	car2.ShowCarInfo();

	system("pause");
	return 0;
}