#include <stdio.h>

int main()
{
    long long num1, num2;
    scanf("%lld %lld ", &num1, &num2);

    // last digit of num1
    int ldigOfa = num1 % 10;
    // last digit of num2
    int ldigOfb = num2 % 10;

    int sumOflDig = ldigOfa + ldigOfb;

    printf("%d", sumOflDig);
}