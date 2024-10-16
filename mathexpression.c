#include <stdio.h>

int main()
{
    int a, b, value; // a+b=value
    char s, equ;

    scanf("%d %c %d %c %d", &a, &s, &b, &equ, &value);

    if (s == '+')
    {
        if (a + b == value)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if (s == '-')
    {
        if (a - b == value)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else
    {
        if (a * b == value)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }
}