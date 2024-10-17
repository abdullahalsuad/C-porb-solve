#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    for (int cs = 0; cs < tc; cs++)
    {
        int num;
        scanf("%d", &num);

        long long factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}