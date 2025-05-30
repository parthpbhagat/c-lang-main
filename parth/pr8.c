#include <stdio.h>
#include <string.h>
int main()
{
    char alphabet[0];
    printf("enter any string:");
    scanf("%s", &alphabet[0]);

    printf("the lenth of string is: %d", strlen(alphabet));
    return 0;
}

#include <stdio.h>
int main()
{
    int row, coll;
    printf("enter number of row in this elements");
    scanf("%d", &row);
    printf("enter number of coll in this elements");
    scanf("%d", &coll);
    int array[row][coll];
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= coll; j++)
        {
            printf("[%d][%d]", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("cubes of elements");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coll; j++)
        {
            int cube = array[i][j] * array[i][j] * array[i][j];
            printf("%d\n", cube);
        }

        printf("\n");
    }

    return 0;
}