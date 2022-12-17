#include <iostream>
using namespace std;

int main() {
	int m;
	int n;
	int mul;
	int sum = 0;
	int min = 10000;

	cin >> m;
	cin >> n;

	for(int i = 1; i <= 100; i++) {
		mul = i * i;
		if (mul >= m && mul <= n) {
			sum += mul;
			if (mul < min) {
				min = mul;
			}
		}
	}

	if (sum == 0) {
		cout << "-1" << endl;
	}
	else {
		cout << sum << endl;
		cout << min << endl;
	}
}