#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "mec";
    char b[100] = "mep";

    int cmp = strcmp(b, a);

    printf("%d\n", cmp);
}
