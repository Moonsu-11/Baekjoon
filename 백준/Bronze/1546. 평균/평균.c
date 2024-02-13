#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	float score[10000];
	float  max;
	float add = 0;
	float final = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]);
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
	printf("%f", final);
}