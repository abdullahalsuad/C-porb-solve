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

    int min = num[0];
    int index = 1;
    for (int f = 0; f < n; f++)
    {
        if (num[f] < min)
        {
            min = num[f];
            index = f + 1;
            // printf("%d", min);
        }
    }
    printf("%d, %d \n", min, index);
}