#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s1[1001], s2[1001], s3[1001];
    scanf("%1000s %1000s %1000s", s1, s2, s3);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (isupper(s1[i]))
        {
            return 0;
        }
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (isupper(s2[i]))
        {
            return 0;
        }
    }
    for (int i = 0; s3[i] != '\0'; i++)
    {
        if (isupper(s3[i]))
        {
            return 0;
        }
    }

    int cmp1 = strcmp(s1, s2);
    int cmp2 = strcmp(s2, s3);
    int cmp3 = strcmp(s1, s3);

    if (cmp1 < 0 && cmp3 < 0)
    {
        // s1 min
        if (cmp2 < 0)
        {
            // s3 max
            printf("%s\n", s1);
            printf("%s\n", s3);
        }
        else
        {
            // s2 max
            printf("%s\n", s1);
            printf("%s\n", s2);
        }
    }
    else if (cmp1 > 0 && cmp2 < 0)
    {
        // s2 min
        if (cmp3 < 0)
        {
            // s3 max
            printf("%s\n", s2);
            printf("%s\n", s3);
        }
        else
        {
            // s1 max
            printf("%s\n", s2);
            printf("%s\n", s1);
        }
    }
    else
    {
        // s3 min
        if (cmp1 > 0)
        {
            // s2 max
            printf("%s\n", s3);
            printf("%s\n", s2);
        }
        else
        {
            // s1 max
            printf("%s\n", s3);
            printf("%s\n", s1);
        }
    }

    return 0;
}
