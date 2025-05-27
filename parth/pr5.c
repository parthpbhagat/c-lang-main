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

// int main() {
//     int row, col;
//     printf("Enter row size: ");
//     scanf("%d", &row);
//     printf("Enter column size: ");
//     scanf("%d", &col);

//     int a[100][100];
//     printf("Enter array elements:\n");

//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("Element at [%d][%d]: ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int largest = a[0][0];

//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             if (a[i][j] > largest) {
//                 largest = a[i][j];
//             }
//         }
//     }

//     printf("The largest element in the array is: %d\n", largest);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int row, col;
//     printf("Enter row size: ");
//     scanf("%d", &row);
//     printf("Enter column size: ");
//     scanf("%d", &col);

//     int a[100][100];
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

//     return 0;
// }