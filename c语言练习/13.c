#include <stdio.h>

int main()
{
    int a = 1;
    int sum_1 = 0;
    int sum_2 = 0;

    while (a <= 100)
    {
        if (a % 2 == 0)
        {
            sum_1 = sum_1 + a;
        }
        a = a + 1;
    }
    printf("sum is %d\n", sum_1);

    a = 1;

    do
    {
        if (a % 2 == 0)
        {
            sum_2 = sum_2 + a;
        }
        a = a + 1;
    } while (a <= 100);

    printf("sum is %d\n", sum_2);
}