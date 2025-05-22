// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("enter array size:", size);
//     scanf("%d", &size);

//     int a[size];

//     printf("enter array element:\n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("negetive element from an array:");
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] < 0)
//         {
//             printf("%d ", a[i]);
//         }
//     }

//     // scanf("%d",)
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int row, columan;
//     printf("enter row size:");
//     scanf("%d", &row);
//     printf("enter columan size:");
//     scanf("%d", &columan);
//     int a[100][100];
//     printf("enter array element:\n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < columan; j++)
//         {
//             printf("[%d][%d]", i, j);//0//0//
//             scanf("%d", &a[i][j]);
//         }

//         printf("\n");
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < columan; j++)
//         {
//             printf("%d ", a[i][j]);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int row, col,sum=0;
//     printf("enter row size:");
//     scanf("%d", &row);
//     printf("enter col size:");
//     scanf("%d", &col);
//     int a[100][100];
//     printf("enter array element:\n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("[%d][%d]", i, j);
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d", a[i][j]);
//         }

//         printf("\n");
//     }

//     int b[100][100];
//     for (int i = 0; i < row; i++)
//     {for (int j = 0; j < col; j++)
//     {
//         printf("[%d][%d]",i,j);
//         scanf("%d",&b[i][j]);
//     }

//         printf("\n");
//     }

//     for (int i = 0; i < row; i++)
//     {for (int j = 0; j<col; j++)
//     {
//         printf("%d",b[i][j]);
//     }

//         printf("\n");
//     }

//     return 0;
//}

// #include<stdio.h>
// int main (){
//     int a[5]={5,6,7,8,9};
//     int sum=0;
//     int result_b[1];
//     for (int i = 0; i < 5; i++)
//     {
//         sum+=a[5];
//     }
//     result_b[1]=sum;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d",a[i]);
//     }
//     print("%d",&result_b[1]);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int size;
    printf("enter array size:", size);
    scanf("%d", &size);
    int a[size];
    printf("enter array elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("nigetive value is: %d\n", a[i]);
        }
    }

    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main (){
//     char str[]="PARTH PATEL";
//     strlwr(str);
//     printf("%s",str);
//     return 0;
// }
