#include <stdio.h>

int main()
{
    int year = 2088;

    if (((year % 4 == 0) && !(year % 100 == 0)) || (year % 400 == 0))
    {
        printf("%d is runyear\n", year);
    }
    else
    {
        printf("%d isn't runyear", year);
    }
}