#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            even++;
        }
        if (num[i] % 2 != 0)
        {
            odd++;
        }
        if (num[i] > 0)
        {
            pos++;
        }
        if (num[i] < 0)
        {
            neg++;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     scanf("%d", &x);

    //     if (x % 2 == 0)
    //     {
    //         even++;
    //     }
    //     if (x % 2 != 0)
    //     {
    //         odd++;
    //     }
    //     if (x > 0)
    //     {
    //         pos++;
    //     }
    //     if (x < 0)
    //     {
    //         neg++;
    //     }
    // }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
}
