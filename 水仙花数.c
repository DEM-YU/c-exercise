#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int start = 1;
    for (int i = 1; i < n; i++)
    {
        start *= 10;
    }
    int end = start * 10;

    for (int num = start; num < end; num++)
    {
        int temp = num;
        int sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;

            int mi = 1;
            for (int i = 0; i < n; i++)
            {
                mi *= digit;
            }
            sum += mi;
            temp = temp / 10;
        }
        if (sum == num)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}