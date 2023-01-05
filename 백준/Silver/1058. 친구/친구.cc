/*
[ 2-친구란? ]
	1. 나한테 Y인 사람
	2. 나한테는 N인데 Y인 사람의 Y인 사람
*/
#include <iostream>
using namespace std;

int main() {
	int n;	// 사람의 수
	string are_you_friends;
	int buddy[50][50];		// N = 0, Y = 1로 바꿔서 저장
	int count_friend[50] = { 0, };	// for문 돌리면서 1인 숫자 카운팅할거임
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> are_you_friends;

		for (int j = 0; j < n; j++) {
			buddy[i][j] = are_you_friends[j] == 'Y' ? 1 : 0;
		}
	}

	int count = 0;	// 2-친구 수
	int max_friend = 0;	// 가장 유명한 사람의 2-친구의 수

	/*
	생각난 해결 방안
	1. 친구 카운터할 때, 배열 하나 새로 만들어서 2-친구인지 아닌지 체크
	2. 체크되어있다면, 이미 카운트한거니까 넘어가기
	3. 그럼 중복도 없앨수있음
	*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (buddy[i][j] == 1) {
				count_friend[j] = 1;
				for (int k = 0; k < n; k++) {
					if (buddy[j][k] == 1) {
						if (i == k) {
							count_friend[k] = 0;
						}
						else {
							count_friend[k] = 1;
						}
					}
				}
			}
		}

		for (int i = 0; i < n; i++) {
			if (count_friend[i] == 1) {
				count_friend[i] = 0;
				count++;
			}
		}
		if (max_friend < count) {
			max_friend = count;
		}
		count = 0;
	}
	cout << max_friend << endl;
}