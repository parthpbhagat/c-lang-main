// #include <stdio.h>
// int main()
// {
//     int num, i, j, k;

//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             for (int k = i; k > i; k--)
//             {
//                 printf("");
//             }

//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        int space = (i - 1) * 2 - 1;
        for (j = 1; j <= space; j++)
        {
            printf("  ");
        }
        for (j = n - i + 1; j >= 1; j--)
        {
            if (i == 1 && j == n)
            {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        int space = (i - 1) * 2 - 1;
        for (j = 1; j <= space; j++)
        {
            printf("  ");
        }

        for (j = n - i + 1; j >= 1; j--)
        {
            if (i == 1 && j == n)
            {
                continue;
            }
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}