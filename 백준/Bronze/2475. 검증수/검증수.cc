#include <iostream>
using namespace std;

int main() {
	int uniqueNum[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> uniqueNum[i];
	}

	for (int i = 0; i < 5; i++) {
		uniqueNum[i] = uniqueNum[i] * uniqueNum[i];
		sum += uniqueNum[i];
	}

	int result = sum % 10;

	cout << result << endl;
}