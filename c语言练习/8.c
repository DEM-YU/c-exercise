#include <stdio.h>

int main()
{
    int product = 2;
    float price = 299.9;

    switch (product)
    {
    case 1:
        if (price < 500)
        {
            printf("this price is cheapest\n");
        }
        else if (price < 1000)
        {
            printf("you have 5%%coupon\n");
        }
        else
        {
            printf("you have 10%%coupon\n");
        }

        break;
    case 2:
        if (price < 200)
        {
            printf("no coupon");
        }
        else if (price < 500)
        {
            printf("you have 8%%coupon");
        }
        else
        {
            printf("you have 15%%coupon");
        }

        break;

    default:
        printf("invaild");
    }
}