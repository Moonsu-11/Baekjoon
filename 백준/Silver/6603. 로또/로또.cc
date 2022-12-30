#include <iostream>
using namespace std;

int lotto[6];
int k;
int S[13];

void lottoCase(int s_start, int l_start) {
	if (l_start == 6) {
		for (int i = 0; i < 6; i++) {
			cout << lotto[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = s_start; i < k; i++) {
		lotto[l_start] = S[i];
		lottoCase(i + 1, l_start + 1);
	}
}

int main(void) {
	while (1) {
		cin >> k;

		if (k == 0) {
			break;
		}

		for (int i = 0; i < k; i++) {
			cin >> S[i];
		}

		lottoCase(0, 0);
		cout << endl;
	}
}