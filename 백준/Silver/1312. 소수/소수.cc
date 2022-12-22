#include <iostream>
using namespace std;

int main() {
	int a, b, n;
	int result = 0;

	cin >> a >> b >> n;

	for (int i = 0; i < n; i++) {
		a = (a % b) * 10;
		result = a / b;
	}

	cout << result;
}