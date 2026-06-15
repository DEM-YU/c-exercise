#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number = rand() % 100 + 1;
    int count = 0;
    int a = 0;

    do
    {
        printf("猜猜这个1到100的数字: ");
        scanf("%d", &a);
        count++;

        if (a < number)
        {
            printf("太小了\n");
        }
        else if (a > number)
        {
            printf("太大了\n");
        }
    } while (a != number);
    printf("你只用了%d就猜出了答案", count);
}