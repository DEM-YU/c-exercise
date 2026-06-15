#include <stdio.h>

int main()
{
    int i;
    int n;
    double sum;
    int sign = 1;

    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        sum += sign * (1.0 / i);
        sign = -sign;
    }
    printf("f(n) = %f", sum);

    return 0;
}