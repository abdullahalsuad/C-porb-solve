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

    for (int f = 0; f < n; f++)
    {
        if (num[f] <= 10)
        {
            int A[f];
            A[f] = num[f];
            printf("A[%d] = %d\n", f, A[f]);
        }
    }
}