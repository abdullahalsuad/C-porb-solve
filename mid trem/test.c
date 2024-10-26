#include <stdio.h>
#include <string.h>

int minimum(int a, int b);

int main()
{
    char str1[1000], str2[1000], str3[1000];
    scanf("%s %s %s", str1, str2, str3);

    char max[1000], min[1000];

    int len1 = strlen(str1), len2 = strlen(str2), len3 = strlen(str3);

    int a = 0;

    for (int i = 0; i < minimum(len1, len2); i++)
    {
        if (str1[i] != str2[i])
        {
            a = 1;
            if ((int)str1[i] > (int)str2[i])
            {
                strcpy(max, str1);
                strcpy(min, str2);
            }
            else
            {
                strcpy(max, str2);
                strcpy(min, str1);
            }
            break;
        }
        if (i == minimum(len1, len2) - 1 && a == 0)
        {
            if (len1 > len2)
            {
                strcpy(max, str1);
                strcpy(min, str2);
            }
            else
            {
                strcpy(max, str2);
                strcpy(min, str1);
            }
        }
    }

    int b = 0;

    for (int j = 0; j < minimum(strlen(max), len3); j++)
    {
        if (max[j] != str3[j])
        {
            b = 1;
            if ((int)max[j] < (int)str3[j])
            {
                strcpy(max, str3);
            }
            break;
        }
        if (j == minimum(strlen(max), len3) - 1 && b == 0)
        {
            if (len3 > strlen(max))
            {
                strcpy(max, str3);
            }
        }
    }

    int c = 0;

    for (int j = 0; j < minimum(strlen(min), len3); j++)
    {
        if (min[j] != str3[j])
        {
            c = 1;
            if ((int)min[j] > (int)str3[j])
            {
                strcpy(min, str3);
            }
            break;
        }
        if (j == minimum(strlen(min), len3) - 1 && c == 0)
        {
            if (len3 < strlen(min))
            {
                strcpy(min, str3);
            }
        }
    }

    printf("%s\n%s", min, max);

    return 0;
}

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
