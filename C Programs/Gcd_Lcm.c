#include<stdio.h>
int main()
 {
     int a,b,x,y,lcm,gcd;
     printf("Enter the first positive integer\n");
     scanf("%d",&a);
     printf("Enter the second positive integer\n");
     scanf("%d",&b);
     x=a;
     y=b;
     while(x!=y)
      {
        if(x>y)
         {
            x = x-y;
         }
        else 
         {
            y = y-x;
         }
      }
    gcd = x;
    printf("Gcd of %d and %d is : %d \n", a,b,gcd);
    lcm = (a*b)/gcd;
    printf("lcm of %d and %d is: %d",a,b,lcm);
    return (0);
 }
