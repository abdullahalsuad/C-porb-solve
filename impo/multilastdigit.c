#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    long long mtotal = a * b * c * d;

    int re = mtotal % 10;       // remaining and last digit of total value
    int qu = mtotal % 100 / 10; // quotient

    printf("%lld%lld\n", qu, re);

    return 0;
}