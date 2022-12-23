#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int conbination = 1;
		int deno = 1;

		for (int nume = m;  nume > m - n;  nume--) {
			conbination *= nume;
			conbination /= deno++;
		}
		cout << conbination << endl;
	}
}