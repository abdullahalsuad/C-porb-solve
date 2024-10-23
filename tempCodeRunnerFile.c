#include <stdio.h>
#include <string.h>

int main()
{
    char a[10], b[10], c[10];
    scanf("%s%s", a, b);

    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = len_a + len_b;

    for (int k = 0; k < len_a; k++)
    {
        c[k] = a[k]; // copy a to c
    }

    for (int i = len_a, j = 0; i < len; i++, j++)
    {
        c[i] = b[j];
    }
    a[len] = '\0';

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", len_a, len_b);
    printf("%s\n", c);
    printf("%s %s\n", a, b);
}