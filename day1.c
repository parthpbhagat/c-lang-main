
        // Q1 table use for loop and while loop

// #include<stdio.h>
// int main (){
//     int num;
//     printf("enter a number to display its multiplication table:");
//     scanf("%d",&num);
//     printf("multiplication table of: %d\n",num);
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d*%d=%d\n",num,i,num*i); 
//     };
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int num,i=1;
//     printf("enter a number to display its multiplication table:");
//     scanf("%d",&num);
//     printf("multiplication table of: %d\n",num);
//     while(i<=10)
//     {
//         printf("%d*%d=%d\n",num,i,num*i); 
//         i++;
//     };
//     return 0;
// }

                 // Q2 sum of frist 10 natural number use for loop and while number

// #include<stdio.h>
// int main (){
//     int i,sum=0;
//     for(i=1;i<=10;i++)
//     {
//         sum+=i;
//     };
//     printf("sum of frist 10 number is:%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     int i=1,sum=0;
//   while(i<=10)
//     {
//         sum+=i;
//         i++;
//     };
//     printf("sum of frist 10 number is:%d",sum);
//     return 0;
// }



             // Q3 display of cube use for loop and while loop 
    
             #include <stdio.h>

             int main() {
                 int i, num;
             
                 printf("Enter the number of terms: ");
                 scanf("%d", &num);
             
                 printf("Cubes of first %d natural numbers using for loop:\n", n);
                 for(i = 1; i <= n; i++) {
                     printf("Number is: %d and cube is: %d\n", i, i * i * i);
                 }
             
                 return 0;
             }
             

