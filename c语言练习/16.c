#include <stdio.h>

int main()
{
    int total_num;
    char name[16];

    printf("请输入你想打招呼的人数: ");
    scanf("%d", &total_num);

    for (int i = 0; i < total_num; i++)
    {
        printf("输入你想打印的名字: ");
        scanf("%15s", name);
        printf("%s, 你好\n", name);
    }
}