#include <stdio.h>

void factorial(int n)
{
    for (int i = 1; i <= n; i++)
    {
        long long fac *= i;
    }

    printf("%d", fac);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    factorial(n);
    // printf("%d", fac);
    return 0;
}