#include <stdio.h>

int main()
{
    int user_type = 2;
    double price = 180;
    double pay;

    if (user_type == 1)
    {
        if (price > 100)
        {
            pay = price * 0.95;
        }
    }
    else if (user_type == 2)
    {
        if (price > 200)
        {
            pay = price * 0.9;
        }
        else
        {
            pay = price * 0.97;
        }
    }
    else
    {
        printf("invaild");
    }

    printf("final price: %.2lf", pay);
}
