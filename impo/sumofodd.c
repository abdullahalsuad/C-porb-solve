#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    for (int cs = 0; cs < tc; cs++)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);

        if (num1 > num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        int sum = 0;
        for (int i = num1 + 1; i < num2; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
            // printf("%d", i);
        }
        printf("sum %d\n", sum);
        sum = 0;
    }
    return 0;
}
