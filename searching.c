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
    // printf("%d %d %d", num[0], num[1], num[2]);

    scanf("%d", &s);
    for (int j = 0; j < n; j++)
    {
        if (s == num[j])
        {
            printf("%d", j);
            f = 1;
            break;
        }
    }

    if (!f)
    {
        printf("%d", -1);
    }
}