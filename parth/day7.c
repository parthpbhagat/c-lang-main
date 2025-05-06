#include <stdio.h>

int main()
{
    int celsius;
    float fahrenheit;
    printf("the temperature is celsius");
    scanf("%d", &celsius);
    fahrenheit = ((9.0 / 5) * celsius) + 32;
    printf("the temperature in fahrenheit:%0.2f\n\n", fahrenheit);

    int angle1, angle2, angle3;
    printf("enter the frist angle is:");
    scanf("%d", &angle1);
    printf("enter the secound is: ");
    scanf("%d", &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("the thard angle is:%d\n\n", angle3);

    float basesalry, hraparcent, daparcent, taparcent;
    float hra, da, ta, grosssalary;
    printf("enter base salary:");
    scanf("%f", &basesalry);
    printf("enter HRA percent:");
    scanf("%f", &hra);
    // hra = ((hraparcent / 100) * basesalry);
    printf("enter DA parcent:");
    scanf("%f", &da);
    // da = ((daparcent / 100) * basesalry);
    printf("enter TA parcent:");
    scanf("%f", &ta);
    // ta = ((taparcent / 100) * basesalry);
    // calculate

 grosssalary =( basesalry + hra + da + ta);
    printf("grosssalary = %f\n", grosssalary);

    return 0;
}