#include <stdio.h>

int main()
{
    int a, b;
    int *pA = &a;
    int *pB = &b;

    scanf("%d %d", pA, pB);

    int difference = (*pA > *pB) ? (*pA - *pB) : (*pB - *pA);

    printf("%d\n", difference);

    return 0;
}
