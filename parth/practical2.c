#include <stdio.h>
int main(){
int score,grade;
printf("enter your score:\n");
scanf("%d",&score);
if (score>90)
{
    printf("your grade is 'A' excellent work!");
}else if (score>=80)
{
    printf("your grade is 'B' well done");
}else if (score>=70)
{
    printf("your grade is 'C' good job");
}else if (score>=60)
{
    printf("your grade is 'D'you passed");
}else if (score>=50)
{
    printf("your grade is 'E'");
}else
{
    printf("your grade is 'F' sorry you failed ");
}










    return 0;
}