#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    // for (int j = 0; j < n; j++)
    // {
    //     printf("%d\n", num[j]);
    // }
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d", num[j]);
    }
}