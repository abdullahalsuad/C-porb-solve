#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c == 'z')
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n", tolower(c + 1));
    }

    return 0;
}
