#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100000];

    scanf("%s", sen);

    // fgets(sen, sizeof(sen), stdin);
    int len = strlen(sen);

    for (int i = 0; i < len; i++)
    {
        if (sen[i] == ',')
        {
            printf(" ");
        }
        else if (sen[i] >= 'A' && sen[i] <= 'Z')
        {
            printf("%c", sen[i] + 32);
        }
        else if (sen[i] >= 'a' && sen[i] <= 'z')
        {
            printf("%c", sen[i] - 32);
        }
        else
        {
            printf("%c", sen[i]);
        }
    }
}