#include <stdio.h>
int main()
{
    int lang;
    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujrati\n");
    printf("enter your choice:");
    scanf("%d", &lang);
    int english;
    printf("press 1 top up recharge\n");
    printf("press 2 internet recharge\n");
    printf("press 3 special recharge\n");
    printf("enter your choice:");
    scanf("%d", &english);
    // if (english == 1);
        

    switch (english)
    {
    case 1:
        printf("you have susccsfully done top up recharge");
        break;
    case 2:
        printf("you have susccsfully done internet recharge");
        break;
    case 3:
        printf("you have susccsfully done special recharge");
    default:
        printf("invalid number");
        break;
    }
    // int hindi;
    // printf(" top up recharge ke liye 1 dabaiye\n");
    // printf(" internet recharge ke liye 2 dabaiye\n");
    // printf("special recharge kr liye 3 dabaiye\n");
    // printf("enter your choice:\n");
    // scanf("%d", &hindi);

    // switch (hindi)
    // {
    // case 1:
    //     printf("aapane saphaltapurvak top up recharge kar liya\n");
    //     break;
    // case 2:
    //     printf("aapane saphaltapurvak internet recharge kar liya\n");
    //     break;
    // case 3:
    //     printf("aapane saphaltapurvak special recharge kar liya\n");
    //     break;

    // default:
    //     printf("invalid number");
    //     break;
    // }
    // int gujrati;
    // printf(" top up recharge mate 1 dabao\n");
    // printf(" internet recharge mate 2 dabao\n");
    // printf("special recharge mate 3 dabao\n");
    // printf("enter your choice:\n");
    // scanf("%d", &gujrati);
    //  switch (gujrati)
    // {
    // case 1:
    //     printf("tame saphaltapurvak top up recharge karavu che\n");
    //     break;
    // case 2:
    //     printf("tame saphaltapurvak internet recharge karavu che\n");
    //     break;
    // case 3:
    //     printf("tame saphaltapurvak special recharge karavu che\n");
    //     break;
    //     default :
    //     printf("invalid number\n");
    //     break;
    // }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3;
//     printf("enter the value of the frist number:\n");
//     scanf("%d", &num1);
//     printf("enter the value of the second number:\n");
//     scanf("%d", &num2);
//     printf("enter the value of the thard number:\n");
//     scanf("%d", &num3);




//     if (num1 < num2)
//     {
//         printf("the minimum number is :%d",num1);
//     }
//     else if (num2 < num3)
//     {
//         printf("the minimum number is :%d",num2);
//     }
//     else
//     {
//         printf("the minimum number is :%d",num3);
//     }

//     return 0;
// }