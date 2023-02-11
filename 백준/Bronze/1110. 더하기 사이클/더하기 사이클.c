#include <stdio.h>

int main()
{
    int num, ten, one, swap, final = 0;
    int cycle = 0;
    scanf("%d", &num);
    final = num;

    ten = num / 10;
    one = num % 10;

    while (1)
    {
        swap = (ten + one) % 10;
        ten = one;
        one = swap;
        num = (ten * 10) + one;
        cycle += 1;

        if (num == final)
            break;
    }

    printf("%d", cycle);
}