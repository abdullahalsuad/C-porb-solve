#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n], num1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", num[j]);
        num1[n - j - 1] = num[j];
    }

    int arrayEqu = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] == num1[i])
        {
            arrayEqu = 1;
            break;
        }
    }

    printf("\n");
    if (arrayEqu)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}