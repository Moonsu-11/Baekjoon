#include <iostream>
using namespace std;

int main() {
	int input_N;
	int num[1000001];	// num[0]은 헷갈리니까 안쓸거임

	num[1] = 0;
	num[2] = 1;
	num[3] = 1;
	num[4] = 2; // 3->1 or 2->2

	for (int i = 5; i < 1000001; i++) {
		num[i] = num[i - 1] + 1;
		if (i % 2 == 0)
			num[i] = min(num[i], num[i / 2] + 1);
		if (i % 3 == 0)
			num[i] = min(num[i], num[i / 3] + 1);
	}

	cin >> input_N;
	cout << num[input_N] << endl;
}