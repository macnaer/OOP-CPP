#include <iostream>
#include <string>
#include <functional>

using namespace std;

void repeat(int repetitions, const function<void(int)>& fn)
{
	for (int i{ 0 }; i < repetitions; ++i)
	{
		fn(i);
	}
}

int main() {

#pragma region Ex1
	//int number = 0;

	//auto result = [&number]() {
	//	number = 100;
	//	cout << "Number => " << number << endl;
	//};
	//result();
	
#pragma endregion

#pragma region Ex2
	int number1 = 50, number2 = 100;

	auto result = [&]() {    // [=] - read, [&] - RW
		cout << "Number1 --> "<< number1 << endl;
		cout << "Number2 --> "<< number2 << endl;
		number1 = 200;
		cout << "Number1 --> " << number1 << endl;
		number2 = 300; //Error
		cout << "Number2 --> " << number2 << endl;
	};
	result();
#pragma endregion

#pragma region Ex4
	/*repeat(10, [](int i) {
		cout << i << '\n';
	});
	repeat(10, [](int i) {
		cout << "Lambda 2 => " << i << '\n';
	});*/
#pragma endregion




	system("pause");
	return 0;
}