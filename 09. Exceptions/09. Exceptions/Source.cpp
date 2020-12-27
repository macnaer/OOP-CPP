#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;


int main() {
	srand(unsigned(time(NULL)));

	string path = "file.txt";
	ifstream stream;
	stream.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		stream.open(path);

	}
	catch (const ifstream::failure & ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
	}
	


	try
	{

	}
	catch (const exception &ex)
	{
		cout << ex.what() << endl;
	}
	system("pause");
	return 0;
}