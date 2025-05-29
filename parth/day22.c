#include <stdio.h>

int cube(int a ){
    return (a*a*a);
}
int main()
{
    int a;
    printf("enter the num a");
    scanf("%d", &a);
    printf("value of a is %d\n",a);
    int cube=a*a*a;
    printf("cube is %d",cube);
    return 0;
} 