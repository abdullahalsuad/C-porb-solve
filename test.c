#include <stdio.h>

void fun(char *x, char *y)
{
    printf("%s\n", x);
    x[0] = 'c';
    x = strcpy(x, y);
}

int main()
{
    char a[10] = "air";
    char b[10] = "apple";

    fun(a, b);

    printf("%s\n", a);
}