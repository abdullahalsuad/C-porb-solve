#include <stdio.h>

int main()
{
    int num, reNum;
    int quNum;

    scanf("%d", &num);
    if (num >= 10 && num <= 99)
    {
        reNum = num % 10;
        quNum = (int)num / 10;
        // printf("reNum = %d, quNum = %d", reNum, quNum);

        if (reNum % quNum == 0 || quNum % reNum == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}