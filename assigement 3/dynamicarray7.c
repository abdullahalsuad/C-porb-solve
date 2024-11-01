#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, n * sizeof(int));

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}