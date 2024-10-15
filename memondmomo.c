#include <stdio.h>

int main()
{
    long long memo, momo, num;
    scanf("%lld %lld %lld", &memo, &momo, &num);

    if (memo % num == 0 && momo % num != 0)
    {
        printf("Memo");
    }
    if (momo % num == 0 && memo % num != 0)
    {
        printf("Momo");
    }
    if (memo % num == 0 && momo % num == 0)
    {
        printf("Both");
    }
    if (memo % num != 0 && momo % num != 0)
    {
        printf("No One");
    }
}