#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000], word1[1000];
    scanf("%s", word);

    int len = strlen(word);

    for (int i = len - 1; i >= 0; i--)
    {
        word1[len - i - 1] = word[i];
    }

    word1[len] = '\0';
    int cmp = strcmp(word1, word);
    if (cmp == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}