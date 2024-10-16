#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num == 0)
        {
            printf("0");
        }

        // int temp = num, digitCount = 0;
        // for (; temp > 0; temp /= 10)
        // {
        //     digitCount++;
        // }

        // for (int j = 0; j < digitCount; j++)
        // {
        //     int digit = num % 10;
        //     printf("%d ", digit);
        //     num /= 10;
        // }
        while (num > 0)
        {
            int digit = num % 10;
            printf("%d ", digit);
            num /= 10;
        }
        printf("\n");
    }
    return 0;
}