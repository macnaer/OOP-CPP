#include <iostream>
#include <string>

using namespace std;

class Train {
private:

	class Vagon {
	public:

		void CreateVagon(string type, int seatCount) {
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

	int SIZE;
public:
	Vagon* vagons;
	void ShowTrainInfo() {
		for (int i = 0; i < SIZE; i++) {
			vagons[i].GetInfo();
		}
	}
	Train() {
		cout << "Enter train size: ";
		cin >> this->SIZE;
		this->vagons = new Vagon[this->SIZE];
		FillVagons();
	}

	void FillVagons() {

		string vagonType;
		int seat = 0;
		for (int i = 0; i < this->SIZE; i++) {
			cout << "vagonType ";
			cin >> vagonType;
			cout << "seat ";
			cin >> seat;
			this->vagons[i].CreateVagon(vagonType, seat);
		}
	}


	~Train() {
		delete[] vagons;
	}
};

int main() {
	
	Train train;
	train.ShowTrainInfo();

	system("pause");
	return 0;
}
