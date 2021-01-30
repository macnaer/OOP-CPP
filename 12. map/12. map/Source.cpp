#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	//================Example1=====================
#pragma region Example1
	/*map<int, string> country;
	country.emplace(4, "Ukraine");
	country.emplace(2, "USA");
	country.emplace(9, "Spain");

	cout << "cout << country[4] = " << country[4] << endl;

	auto it = country.find(2);

	if (it != country.end()) {
		cout << it->second << endl;
	}
	else {
		cout << "Element not found! " << endl;
	}*/

#pragma endregion

	//================Example1=====================
	//================Example2=====================
#pragma region Example2
	map<string, string> country;
	country.emplace("ua", "Ukraine");
	country.emplace("en", "England");
	country.emplace("us", "USA");

	for (auto it = country.begin(); it != country.end(); ++it) {
		cout << it->first << " : " << it->second << endl;
	}

	cout << "country[ua] => " << country["ua"] << endl;

	try {
		country.at("de") = "Germany";
	}
	catch (const std::exception& ex) {
		cout << ex.what() <<endl;
	}

	country.erase("en");

	for (auto it = country.begin(); it != country.end(); ++it) {
		cout << it->first << " : " << it->second << endl;
	}


#pragma endregion
	//================Example2=====================
	


	system("pause");
	return 0;
}