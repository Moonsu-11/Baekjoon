#include <stdio.h>

int N;

int factorial(int n)
{
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else return 1;
}


int main()
{
	scanf("%d", &N);
	printf("%d\n", factorial(N));
}