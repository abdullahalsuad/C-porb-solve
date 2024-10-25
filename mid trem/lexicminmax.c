// You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.
// Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.
// Input Format
// The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.
// Constraints
// 1 <= |S1|, |S2|, |S3| <= 1000
// Output Format
// In the first line print the lexicographically minimum string.
// In the second line print the lexicographically maximum string.
// Sample Input 0
// abc def ghi
// Sample Output 0
// abc
// ghi

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[1001], s2[1001], s3[1001];
    scanf("%s%s%s", s1, s2, s3);

    int cmp1 = strcmp(s1, s2);
    int cmp2 = strcmp(s2, s3);
    int cmp3 = strcmp(s1, s3);

    if (cmp1 < 0 && cmp3 < 0)
    {
        // s1 min
        if (cm2 < 0)
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
