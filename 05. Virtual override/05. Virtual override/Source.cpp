#include <iostream>
#include <string>

using namespace std;

class Wheicle {
public:
	virtual void Drive() = 0;
	void DriverLicense() {
		cout << "Driver license = TRUE" << endl;
	}
};

class Car : public  Wheicle {
public:
	void Drive() override
	{
		cout << "Drive by Car." << endl;
	}
};

class Truck : public Car {
public:
		void Drive() override
		{
			cout << "Drive by Truck." << endl;
		}
};

class Driver {
public:
	void Drive(Car &car)
	{
		car.Drive();
	}
};

int main() {

	Car car;
	car.Drive();
	car.DriverLicense();

	Truck truck;
	truck.Drive();
	truck.DriverLicense();


	Driver driver;
	driver.Drive(car);
	driver.Drive(truck);


	system("pause");
	return 0;
}