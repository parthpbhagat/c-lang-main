 
 
 
 
 #include<stdio.h>
 int main(){
    float basesalary,hraparcent,daparcent,taparcent;
    float grosssalary,HRA, DA, TA;
    printf("ENTER THE BASE SALARY");
    scanf("%f",&basesalary);
    printf("enter the HAR parcent");
    scanf("%f",&hraparcent);
    printf("enter the DA parcent");
    scanf("%f",&daparcent);
    printf("enter the TA parcent");
    scanf("%f",&taparcent);
    grosssalary=basesalary+hraparcent+daparcent+taparcent;
    printf("grosssalary=%0.2f",grosssalary);



    



    return 0;}
    


