// #include<stdio.h>
// int main (){
//     int i;
//     for ( i = 1; i <=5; i++)
//     {int j;
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             // printf("%d",j);
//             printf("*");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int i, j, num=1;
    for ( i = 1; i <=5; i++)
    {for ( j = 1; j <=i; j++)
    {
        printf("%d",num);
        num++;
    }
    
        printf("\n");
    }
    
    return 0;
}