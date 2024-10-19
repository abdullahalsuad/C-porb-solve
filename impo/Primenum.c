#include <stdio.h>
#include <math.h>

int main()
{
    long long x;
    scanf("%lld", &x);

    for (int i = 2; i <= x; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= x; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("% d", i);
        }
    }

    return 0;
}
