#include <stdio.h>
int f[100001];
int main()
{
    int n;
    scanf("%d", &n);

    int f[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        f[num]++;
    }

    int uniquenum = 0;
    for (int i = 1; i <= 100001; i++)
    {
        if (f[i] == 1)
        {
            uniquenum++;
        }
    }

    printf("%d\n", uniquenum);
    return 0;
}