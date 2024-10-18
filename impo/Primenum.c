#include <stdio.h>
#include <math.h>

int main()
{
    long long X;
    scanf("%lld", &X);

    if (X <= 1)
    {
        printf("NO\n");
        return 0;
    }

    int isPrime = 1;

    for (int i = 2; i <= sqrt(X); i++)
    {
        if (X % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
