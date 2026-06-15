#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;

    printf("type the number and press enter\n");
    scanf("%d", &number);
    while (number != -1)
    {
        sum += number;
        count++;
        printf("type the number and press enter\n");
        scanf("%d", &number);
    }

    printf("%f\n", 1.0 * (sum / count));
}