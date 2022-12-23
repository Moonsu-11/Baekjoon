#include<iostream>
#include<string>
using namespace std;

int main() {
    int diff_min = 50;
    string a, b;

    cin >> a >> b;

    for (int length = 0; length <= b.length() - a.length(); length++) {
        int diff_count = 0;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i + length]) {
                diff_count++;
            }
        }

        if (diff_min >= diff_count) {
            diff_min = diff_count;
        }
        else {
            diff_min = diff_min;
        }
    }
    cout << diff_min << endl;
}