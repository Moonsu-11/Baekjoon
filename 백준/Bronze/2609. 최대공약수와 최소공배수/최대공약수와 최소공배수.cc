#include <iostream>
using namespace std;

int main() {
	int input_A, input_B;
	
	cin >> input_A >> input_B;

	int a = input_A;
	int b = input_B;

	// G = 최대공약수, L = 최소공배수
	int g = input_A % input_B;
	while (g != 0) {
		input_A = input_B;
		input_B = g;
		g = input_A % input_B;
	}
	g = input_B;

	int l = g * (a / g) * (b / g);

	cout << g << endl << l;
}