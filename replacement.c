#include <stdio.h>

int main()
{
    int n, s, f = 0;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (num[j] > 0)
        {
            num[j] = 1;
        }
        if (num[j] < 0)
        {
            num[j] = 2;
        }
    }

    for (int p = 0; p < n; p++)
    {
        printf("%d ", num[p]);
    }
}