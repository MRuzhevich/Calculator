#include <iostream>

using namespace std;

void ShowMenu() {
	cout << "Choose opton:" << endl;
	cout << "1. Del -> Energy" << endl;
	cout << "2. Energy -> Del" << endl;
	cout << "3. Wave -> Energy" << endl;
	cout << "4. Energy -> Wave" << endl;
	cout << "5. Del -> Wave" << endl;
	cout << "6. Wave -> Del" << endl;
	cout << "Type M to show menu" << endl;
}

int main()
{
	int number;
	int n = 1;
	double Del, Energy, Wave;
	char yn = 'y';
	char m = 'M';

	ShowMenu();

	do {

		if (cin >> m) {
			ShowMenu();
		}

		cin >> number;

		if (typeid(number) == typeid(int&)) {
			if (number >= 1 && number <= 6) {
				switch (number) {
				case 1:
					cout << "Enter Del (mm): " << endl;
					cin >> Del;
					cout << "Energy " << 1240 / (Del * 8) << " eV" << endl;
					break;
				case 2:
					cout << "Enter Energy (eV): " << endl;
					cin >> Energy;
					cout << "Del " << 1240 / (Energy * 8) << " mm" << endl;
					break;
				case 3:
					cout << "Enter Wave (um): " << endl;
					cin >> Wave;
					cout << "Energy " << 1240 / Wave << " eV" << endl;
					break;
				case 4:
					cout << "Enter Energy (eV): " << endl;
					cin >> Energy;
					cout << "Wave " << 1240 / Energy << " um" << endl;
					break;
				case 5:
					cout << "Enter Del (mm): " << endl;
					cin >> Del;
					cout << "Wave " << Del * 8 << " um" << endl;
					break;
				case 6:
					cout << "Enter Wave (um): " << endl;
					cin >> Wave;
					cout << "Del " << Wave / 8 << " mm" << endl;
					break;
				}
				cout << "Continue? Y/N" << endl;
				cin >> yn;
			}
			else {
				cout << "Enter number from 1 to 6" << endl;
			}
		}
		else {
			cout << "Enter number" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	} while (yn == 'y' && cin >> number);



	cin.get();
}