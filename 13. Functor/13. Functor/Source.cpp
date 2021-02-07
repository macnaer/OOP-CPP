#include <iostream>
#include <string>

using namespace std;

class Functor {
public:
	int operator()(int a, int b) {
		return a + b;
	}

	int operator= (int a) {
		return a;
	}

};


int main() {

	int a = 5, b = 10;
	Functor foo;
	int result = foo(a, b);
	foo = (5);
	cout << a << " + " << b << " = " << result << endl;


	system("pause");
	return 0;
}