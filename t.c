#include <stdio.h>

int main()
{

    int n, oddCount = 0, evenCount = 0, positiveCount = 0, negativeCount = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2)
        {
            oddCount++;
        }
        else
        {
            evenCount++;
        }

        if (x > 0)
        {
            positiveCount++;
        }
        else if (x < 0)
        {
            negativeCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}