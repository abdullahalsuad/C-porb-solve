#include <stdio.h>

int main()
{
    // x = original price, d = discount percentage ,p = after discount price
    int d, p;
    float x, df;
    scanf("%d %d", &d, &p);

    df = (float)d / 100;

    // dis = 1 - df;
    x = p / (1 - df);

    printf("%.2f", x);
}