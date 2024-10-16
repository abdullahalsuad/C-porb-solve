#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long sum = n * (n + 1) / 2;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    //     printf("Sum: %d %d\n", i, sum);
    // }

    printf("%lld", sum);
    return 0;
}