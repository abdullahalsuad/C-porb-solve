#include <stdio.h>

int main()
{
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int count[10000] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int num;
            scanf("%d", &num);
            count[num]++;
        }
    }

    for (int i = 0; i < X; i++)
    {
        int checknum;
        scanf("%d", &checknum);
        printf("%d\n", count[checknum]);
    }

    return 0;
}
