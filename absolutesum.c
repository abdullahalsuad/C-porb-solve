#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0;
    int num;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("%lld\n", llabs(sum));

    return 0;
}
