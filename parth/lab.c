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
    // scanf("%d",&num);
    // while (num>=1)
    // {if (num % 2==1)
    // {
    //     printf("%d \t",num);

    // }num--;
    // }
    int start, end;
    printf("enter the frist number: ");
    scanf("%d", &start);

    printf("enter the secand number: ");
    scanf("%d", &end);

    printf("Leap years between %d and %d are:\t", start, end);

    while (start <= end)
    {

        if ((start % 4 == 0 && start % 100 != 0) || (start % 400 == 0))
        {
            printf("%d\t", start);
        }
        start++;
    }

    return 0;
}