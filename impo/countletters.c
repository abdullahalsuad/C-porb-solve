#include <stdio.h>

int main()
{

    int f[26] = {0};
    char S[10000001];

    printf("Type NUmber : ");
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++)
    {
        f[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            printf("%c : %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}
