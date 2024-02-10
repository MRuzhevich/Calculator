#include <iostream>
#include <string>

using namespace std;

void ShowMenu() {
	cout << "Choose option:" << endl;
	cout << "1. Del -> Energy and Del -> Wave" << endl;
	cout << "2. Energy -> Del and Energy -> Wave" << endl;
	cout << "3. Wave -> Energy and Wave -> Del" << endl;
	cout << "Type M to show menu" << endl;
}

int main()
{
	int intinput;

	double Del, Energy, Wave;

	string input;

	ShowMenu();

	while (1) {

		cin.sync();

		getline(cin, input);

		if (input == "y" || input == "Y") {
			cout << "Enter number" << endl;
			continue;
		}
		if (input == "n" || input == "N") {
			break;
		}

		if (input == "M") {
			ShowMenu();
			continue;
		}
		try {
			intinput = stoi(input);
		}
		catch (invalid_argument const& ex) {
			cout << "Error " << ex.what() << '\n';
			cout << "Enter number" << '\n';
			continue;
		}

		if (intinput >= 1 && intinput <= 3) {
			switch (intinput) {
			case 1:
				cout << "Enter Del (mm): " << endl;
				cin >> Del;
				cout << "Energy " << 1240 / (Del * 8) << " eV" << endl;
				cout << "Wave " << Del * 8 << " um" << endl;
				break;
			case 2:
				cout << "Enter Energy (eV): " << endl;
				cin >> Energy;
				cout << "Del " << 1240 / (Energy * 8) << " mm" << endl;
				cout << "Wave " << 1240 / Energy << " um" << endl;
				break;
			case 3:
				cout << "Enter Wave (um): " << endl;
				cin >> Wave;
				cout << "Energy " << 1240 / Wave << " eV" << endl;
				cout << "Del " << Wave / 8 << " mm" << endl;
				break;
			}
			cout << "Continue? Y/n" << endl;
		}
		else {
			cout << "Enter number from 1 to 3" << endl;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}