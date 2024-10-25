#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];

    scanf("%20s", a);
    scanf("%20s", b);

    int cmp1 = strcmp(a, b);

    if (cmp1 < 0)
    {
        printf("%s\n", a);
    }
    else if (cmp1 > 0)
    {
        printf("%s\n", b);
    }

    return 0;
}