#include <stdio.h>

void printsDigits(int num)
{
    if (num == 0)
    {
        return;
    }
    int digit = num % 10;
    printsDigits(num / 10);
    printf("%d ", digit);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int cs = 0; cs < t; cs++)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
            printf("0");
        printsDigits(num);
        printf("\n");
    }

    return 0;
}