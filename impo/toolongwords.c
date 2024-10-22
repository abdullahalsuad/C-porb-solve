#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char words[101];
        scanf("%s", words);

        // int len = strlen(words);
        int len = 0;
        for (int j = 0; words[j] != '\0'; i++)
        {
            len++;
        }

        if (len > 10)
        {
            printf("%s%d%s\n", words[0], len - 2, words[len - 1]);
        }
        else
        {
            printf("%d\n", words)
        }
    }
}
