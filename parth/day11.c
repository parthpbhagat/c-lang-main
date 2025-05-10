#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter a value of the frist number :\n");
    scanf("%d", &num1);
    printf("enter a value of the secound number:\n");
    scanf("%d", &num2);
    printf("enter the value of the thard number:\n");
    scanf("%d", &num3);
    if (num1 < num2)
    {
        printf("the minimum value is:%d", num1);
    }
    else if (num2 < num3)
    {
        printf("the minimum value is:%d", num2);
    }
    else if (num3 < num1)
    {
        printf("the minimum value is:%d", num3);
    }

    else
    {
        printf("the minimum value is:%d", num3);
    }

    int num1, num2, num3, num4;
    printf("enter a value of the frist number :\n");
    scanf("%d", &num1);
    printf("enter a value of the secound number:\n");
    scanf("%d", &num2);
    printf("enter the value of the thard number:\n");
    scanf("%d", &num3);
    printf("enter the value of the forth number:\n");
    scanf("%d", &num4);
    if (num1 < num2)
    {
        printf("the minimum value is:%d", num1);
    }
    else if (num2 < num3)
    {
        printf("the minimum value is:%d", num2);
    }
    else if (num3 < num1)
    {
        printf("the minimum value is:%d", num3);
    }
    else if (num4 < num2)
    {
        printf("the minimum value is:%d", num4);
    }
    else if (num4 < num3)
    {
        printf("the minimum value is:%d", num4);
    }
    else if (num4 < num3)
    {
        printf("the minimum value is:%d", num4);
    }

    else
    {
        printf("the minimum value is:%d", num4);
    }

    return 0;
}