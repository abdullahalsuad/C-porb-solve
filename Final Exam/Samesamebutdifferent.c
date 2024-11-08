// You will be given 3 strings each of same length consisting of only small case letters.In one operation you can change a letter to any other letter of one of the strings.You have to find out the minimum number of operations to make all 3 strings same.Input Format
// The input will contain 3 Strings.
// Constraints
// 1 <= Length of each string <= 100
// Output Format
// Print an integer,the minimum number of operations to make the strings same.
// Sample Input 0
// train
// candy
// bread
// Sample Output 0
// 9

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[101], str2[101], str3[101];

    scanf("%s %s %s", str1, str2, str3);

    int n = strlen(str1);

    int t_operation = 0;
    for (int i = 0; i < n; i++)
    {
        char ch1 = str1[i], ch2 = str2[i], ch3 = str3[i];

        if (ch1 == ch2 && ch2 == ch3)
        {
            continue;
        }

        if (ch1 == ch2 || ch2 == ch3 || ch1 == ch3)
        {
            t_operation += 1;
        }
        else
        {
            t_operation += 2;
        }
    }

    printf("%d\n", t_operation);
    return 0;
}
