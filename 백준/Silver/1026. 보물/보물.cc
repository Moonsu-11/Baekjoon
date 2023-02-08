#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> a, b;
	int input_a, input_b;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input_a;
		a.push_back(input_a);
	}
	for (int i = 0; i < n; i++) {
		cin >> input_b;
		b.push_back(input_b);
	}

	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end());

	int sum = 0;
	
	for (int i = 0; i < n; i++) {
		sum += a[i] * b[i];
	}

	cout << sum << endl;
}