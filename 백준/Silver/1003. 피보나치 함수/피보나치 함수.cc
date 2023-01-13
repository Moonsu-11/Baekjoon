#include <iostream>
using namespace std;

int main() {
    int testcase;
    int n;
    int count_zero[42];
    int count_one[42];

    count_zero[0] = 1;
    count_zero[1] = 0;

    count_one[0] = 0;
    count_one[1] = 1;

    for (int i = 2; i <= 41; i++) {
        count_zero[i] = count_zero[i - 1] + count_zero[i - 2];
        count_one[i] = count_one[i - 1] + count_one[i - 2];
    }

    cin >> testcase;

    while (testcase--) {
        cin >> n;
        cout << count_zero[n] << " " << count_one[n] << endl;
    }
}