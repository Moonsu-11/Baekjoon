#include<iostream>
#include<algorithm>
using namespace std;

int chess[51][51];

int check(int x, int y) {
	int cnt1 = 0;
	int cnt2 = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == chess[i][j]) cnt1++;
			if ((i + j + 1) % 2 == chess[i][j]) cnt2++;
		}
	}
	return min(cnt1, cnt2);
}

int main() {
	int N, M;
	int lessPaint = 2500;
	char inputChess;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> inputChess;
			if (inputChess == 'B')
				chess[i][j] = 0;
			else
				chess[i][j] = 1;
		}
	}

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			if (lessPaint > check(i, j)) lessPaint = check(i, j);
		}
	}

	cout << lessPaint;
}