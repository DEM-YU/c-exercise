#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 用当前系统时间作为随机数种子，确保每次运行数字都不同
    srand((unsigned int)time(NULL));

    // 生成 1 到 1000 之间的随机数
    int number = rand() % 1000 + 1;
    int count = 0;
    int a = 0;

    printf("================ 猜数字游戏 (1-1000) ================\n");

    do
    {
        printf("猜猜这个1到1000的数字: ");

        // 检查输入是否合法
        if (scanf("%d", &a) != 1)
        {
            printf("请输入有效的数字！\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        count++;

        if (a < number)
        {
            printf("太小了！再试一次。\n\n");
        }
        else if (a > number)
        {
            printf("太大了！再试一次。\n\n");
        }
    } while (a != number);

    printf("🎉 恭喜你答对了！真正的答案就是 %d。\n", number);
    printf("📊 你总共用了 %d 次猜出答案！\n", count);

    return 0;
}