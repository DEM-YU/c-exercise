#include <stdio.h>

int main()
{
    char product;
    float price;

    scanf(" %c %f", &product, &price);

    switch (product)
    {
    case 'A':
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
    case 'B':
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