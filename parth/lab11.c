#include <stdio.h>
int main()
{
    int a, b, swap;
    printf("enter the value is a:", a);
    scanf("%d", &a);
    printf("enter the value is b:", b);
    scanf("%d", &b);

    printf("output befor swaping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    swap = a;
    a = b;
    b = swap;

    printf("output after swaping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}