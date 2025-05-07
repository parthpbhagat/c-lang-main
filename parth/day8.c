#include<stdio.h>
int main(){
    float basesalary,hraparcent,daparcent,taparcent;
    float grosssalary,HRA,DA,TA;
    printf("enter the base salary");
    scanf("%f",&basesalary);
    printf("enter the HRA");
    scanf("%f",&hraparcent);
    printf("enter the DA");
    scanf("%f",&daparcent);
    printf("enter the TA");
    scanf("%f",&taparcent);
    grosssalary=basesalary+hraparcent+daparcent+taparcent;
    printf("grosssalry is=%0.2f\n\n",grosssalary);

    int angle1,angle2,angle3;
    printf("enter the first angle:");
    scanf("%d",&angle1);
    printf("enter the secand angle:");
    scanf("%d",&angle2);
    angle3=180-(angle1+angle2);
    printf("thard angle is:%d",angle3);
    return 0;

}