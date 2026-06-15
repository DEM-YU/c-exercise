#include <stdio.h>

int main()
{
    int price;
    printf("请输入商品价格: ");
    scanf("%d", &price);

    int money;
    printf("请输入用户金额:");
    scanf("%d", &money);

    int return_money;
    return_money = money - price;

    if (price <= money)
    {
        printf("应找回的的金额为%d \n:", return_money);
    }
    else
    {
        printf("钱不够");
    }
}