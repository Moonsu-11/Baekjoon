#include <iostream>
using namespace std;

int main() {
	int num[9];
	int max;
    int place;
    
    max = num[0];
    
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (max < num[i]) {
			max = num[i];
			place = i + 1;
		}
	}
	cout << max << endl << place;
}