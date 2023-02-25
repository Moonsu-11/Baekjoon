#include <iostream>
using namespace std;

int main() {
	int note[8];
	for (int i = 0; i < 8; i++) {
		cin >> note[i];
	}

	if (note[0] == 1) {
		bool ascending_true = true;

		for (int i = 0; i < 8; i++) {
			if (i+1 != note[i]) {
				ascending_true = false;
			}
		}
		if (ascending_true == true)
			cout << "ascending" << endl;
		else
			cout << "mixed" << endl;
	}
	else if (note[0] == 8) {
		bool descending_true = true;

		for (int i = 0; i < 8; i++) {
			if (8 - i != note[i]) {
				descending_true = false;
			}
		}
		if (descending_true == true)
			cout << "descending" << endl;
		else
			cout << "mixed" << endl;
	}
	else
		cout << "mixed" << endl;
}