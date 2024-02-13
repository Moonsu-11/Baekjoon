#include <iostream>
using namespace std;

int main()
{
	int N;
	float score[1000] = {0, };
	float  max;
	float add = 0;
	float final = 0;

    cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	max = score[0];

	for (int i = 0; i < N; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < N; i++) {
		score[i] = score[i] / max * 100;
	}

	for (int i = 0; i < N; i++) {
		add += score[i];
	}

	final = add / N;
	cout << final;
}