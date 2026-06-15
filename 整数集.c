#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int count = 0;

    for (int i = a; i <= a + 3; i++)
    {
        for (int j = a; j <= a + 3; j++)
        {
            for (int k = a; k <= a + 3; k++)
            {
                if (i != k && i != j && j != k)
                {
                    count++;
                    printf("%d%d%d", i, j, k);

                    if (count % 6 == 0)
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
    }

    return 0;
}
