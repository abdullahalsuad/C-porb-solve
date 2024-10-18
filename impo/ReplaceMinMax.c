#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    // int min = INT_MAX, max = INT_MIN;
    int min_index = 0, max_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (num[i] < num[min])
        {
            min_index = i;
        }

        if (num[i] > max)
        {
            max_index = num[i];
        }

        printf("Min = %d, Max = %d \n", min, max);
    }
    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d", A[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");
}
