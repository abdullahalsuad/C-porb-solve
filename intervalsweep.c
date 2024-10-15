#include <stdio.h>

int main()
{
    long long odd, even;
    scanf("%lld %lld", &odd, &even);

    int total = odd + even;

    if (odd == 0 && even == 0)
    {
        printf("NO");
    }
    else if (total % 2 == 0)
    {
        if (odd == even)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if (odd == even + 1 || even == odd + 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
