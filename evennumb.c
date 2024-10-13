// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
// }

#include <stdio.h>

int main()
{

    int n, c = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            c++;
        }
    }
    if (n == 0)
    {
        printf("%d", -1);
    }

    return 0;
}
