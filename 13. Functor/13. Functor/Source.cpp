#include <iostream>
#include <string>

using namespace std;

class Functor {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};


int main() {

	int a = 5, b = 10;
	Functor foo;
	int result = foo(a, b);
	cout << a << " + " << b << " = " << result << endl;


	system("pause");
	return 0;
}