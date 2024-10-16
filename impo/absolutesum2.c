#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int p = 0; p < n; p++)
    {
        sum += num[p];
    }

    printf("%lld\n", llabs(sum));
    return 0;
}