#include <stdio.h>

int main()
{
    int a = 2;
    int b = 8;

    int answer_1 = a - b;
    int answer_2 = b - a;
    if (a - b > 0)
    {
        printf("the answer is %d \n", answer_1);
    }
    else
    {
        printf("the answer is %d", answer_2);
    }
}