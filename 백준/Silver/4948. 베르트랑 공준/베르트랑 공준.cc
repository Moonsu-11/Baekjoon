#include<iostream>
using namespace std;

int main() {
	int testcase;	// 입력받는 숫자 N
	int maxNum = 246912;	// 최대숫자
	int primeNumber[246912];	// 소수인지 아닌지 판별하기 위한 배열
	int count = 0;	// 소수의 갯수

	while (1) {
		cin >> testcase;

		if (testcase == 0) {
			break;
		}

		// 에라토스테네스의 체
		for (int i = 2; i <= maxNum; i++) {
			primeNumber[i] = i;
		}

		for (int i = 2; i <= maxNum; i++) {
			if (primeNumber[i] == 0)
				continue;

			for (int j = 2 * i; j <= maxNum; j += i) {
				primeNumber[j] = 0;
			}
		}

		for (int i = testcase + 1; i <= 2 * testcase; i++) {
			if (primeNumber[i] != 0)
				count++;
		}

		cout << count << endl;
		count = 0;
	}
}