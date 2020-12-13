#include <iostream>
#include <string>

using namespace std;

class Train {
public:
	void ShowTrainInfo() {
		for (int i = 0; i < SIZE; i++) {
			vagons[i].GetInfo();
		}
	}

private:

	class Vagon {
	public:
		Vagon(string type, int seatCount) {
			this->type = type;
			this->seatCount = seatCount;
		}

		void GetInfo() {
			cout << "Type: " << this->type << "\nSeat: " << this->seatCount << endl;
			cout << "-------------------------------------------" << endl;
		}
	private:
		string type;
		int seatCount;
	};

	static const int SIZE = 3;
	Vagon vagons[SIZE]{
		Vagon("Coupe", 30),
		Vagon("Plackart", 40),
		Vagon("Lux", 25)
	};
};

int main() {

	Train train;
	train.ShowTrainInfo();

	system("pause");
	return 0;
}