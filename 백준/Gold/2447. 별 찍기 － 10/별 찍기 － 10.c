#include <stdio.h>

int make_star(int x, int y, int n)
{
    if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
        printf(" ");
    else
        if (n % 3 == 1)
            printf("*");
        else
            make_star(x, y, n / 3);
}

int main(int x, int y, int N)
{
    int a, b, n;
    scanf("%d", &n);
    a = 0;

    while (a < n)
    {
        b = 0;
        while (b < n)
        {
            make_star(a, b, n);
            b++;
        }
        printf("\n");
        a++;
    }
}