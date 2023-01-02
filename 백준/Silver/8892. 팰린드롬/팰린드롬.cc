#include <iostream>
#include <algorithm>
using namespace std;

int testcase;	// t
int words_num;	// k
string alphabet[100];	// 입력받을 알파벳들
string p_word;  // 알파벳들 합쳐서 팰린드롬 만들기
string compare; // 비교하기


int main() {
	cin >> testcase;
	
	while (testcase--) {
		cin >> words_num;

		for (int i = 0; i < words_num; i++) {
			cin >> alphabet[i];
		}

        bool readyFound = false;    // 팰린드롬 찾음

		for (int a = 0; a < words_num; a++) {
			for (int b = 0; b < words_num; b++) {
                if (a == b) {
                    continue;
                }
                if (a != b) {
                    p_word = alphabet[a] + alphabet[b];
                    compare = p_word;
                    reverse(p_word.begin(), p_word.end());
                    if (p_word == compare) {
                        readyFound = true;
                        cout << p_word << endl;
                        break;
                    }
                }
            }
            if (readyFound == true) {
                break;
            }
        }
        if (readyFound == false) {
            cout << '0' << '\n';
        }
        readyFound = false;
	}
}