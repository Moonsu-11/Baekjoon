#include <iostream>
using namespace std;

long long tree[1000001];	// 나무 높이 배열

int binarySearch(int startCutter, int endCutter, int needTree, int treeCount) {
	while (startCutter <= endCutter) {
		long long treeLength = 0;
		int midCutter = (startCutter + endCutter) / 2;

		for (int i = 0; i < treeCount; i++) {
			if (midCutter < tree[i]) {
				treeLength += tree[i] - midCutter;
			}
		}

		if (treeLength > needTree)
			startCutter = midCutter + 1;
		else if (treeLength < needTree)
			endCutter = midCutter - 1;
		else {
			return midCutter;
			break;
		}
	}
}

int main() {
	long long input_N;	// 나무 수
	long long needTree_M;	// 필요한 나무 길이
	int treeHeight;	// 나무 높이
	int maxCutterHeight = 0;	// 절단기 높이

	cin >> input_N >> needTree_M;

	for (int i = 0; i < input_N; i++) {
		cin >> treeHeight;
		tree[i] = treeHeight;
		if (maxCutterHeight <= treeHeight)
			maxCutterHeight = treeHeight;
	}

	int startCutter = 1;
	long long endCutter = maxCutterHeight;
	long long cutterHeight = 0;

	while (startCutter <= endCutter) {
		long long treeLength = 0;
		int midCutter = (startCutter + endCutter) / 2;

		for (int i = 0; i < input_N; i++) {
			if (midCutter < tree[i]) {
				treeLength += tree[i] - midCutter;
			}
		}

		if (treeLength >= needTree_M) {
			if (cutterHeight < midCutter) {
				cutterHeight = midCutter;
			}
			startCutter = midCutter + 1;
		}
		else if (treeLength < needTree_M)
			endCutter = midCutter - 1;
	}
	cout << cutterHeight << endl;
}
