#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int num, found = 0;
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == num)
            {
                found = 1;
                break;
            }
        }
    }

    if (found)
    {
        printf("will not taken number");
    }
    else
    {
        printf("will  taken number");
    }
    return 0;
}
