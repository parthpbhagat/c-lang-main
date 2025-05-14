#include <stdio.h>
int main()
{

    // int num = 10;
    // while (num>=1)
    // {
    //     printf("%d\n",num);
    //     num--;
    // }

    //    int num = 1;
    // while (num<=10)
    // {
    //     printf("%d\n",num);
    //     num++;
    // }

    // int num;
    // printf("enter any number");
    // scanf("%d",&num);
    // while (num>=1)
    // {
    //     printf("%d\n",num);
    //     num--;
    // }

    // int num;
    // printf("enter any number:");
    // scanf("%d", &num);
    // while (num >= 1)
    // {
    //     if (num % 2 == 1)
    //     {
    //         printf("%d \t", num);
    //     }
    //     num--;
    // }


// int num=10;
// do
// {
//     printf("%d\n",num);
//     num--;
// } while (num>=1);

// fibonacci series
int n,a=0,b=1,c,i;
printf("enter number of turn ");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
    printf("%d\t",a); // 0+1=1      
    c=a+b; 
    a=b;
    b=c; 
}


return 0;
}
