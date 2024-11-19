// ou are given two strings S and T consisting of only small letters. In one operation , you can pick any two characters of string S and swap their places. Your task is to determine if it is possible to make S and T equal after a finite number of operations ( possibly zero).

// Input Format

// First line contains string S
// Second line contains string T
// Constraints

// 1<= |S|, |T| <= 1000
// Output Format

// Print “YES” if the answer is positive ,”NO” otherwise.
// Sample Input 0

// phitron
// rhinpto
// Sample Output 0

// YES
// Sample Input 1

// programming
// ingprorramm
// Sample Output 1

// NO

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001], T[1001];
    int countS[26] = {0}, countT[26] = {0};

    // Input strings
    scanf("%s", S);
    scanf("%s", T);

    // Check if lengths are the same
    if (strlen(S) != strlen(T))
    {
        printf("NO\n");
        return 0;
    }

    // Count character frequencies for S and T
    for (int i = 0; S[i] != '\0'; i++)
    {
        countS[S[i] - 'a']++;
        countT[T[i] - 'a']++;
    }

    // Compare the character counts
    for (int i = 0; i < 26; i++)
    {
        if (countS[i] != countT[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    // If all checks passed
    printf("YES\n");
    return 0;
}
