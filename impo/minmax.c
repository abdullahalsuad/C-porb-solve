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
    int min = num[0], max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }

        if (num[i] > max)
        {
            max = num[i];
        }

        printf("Min = %d, Max = %d \n", min, max);
    }
    for (int l = 0; l < n; l++)
        printf("Numbers = %d", num[l]);

    // printf("Minimum: %d\n", min);
    // printf("Maximum: %d\n", max);
    printf("Min = %d, Max = %d \n", min, max);
    return 0;
}
