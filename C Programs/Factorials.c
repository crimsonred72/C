#include<stdio.h>

int main()
  {
     int no;
     int factorial(int);
     printf("Enter the Value: ");
     scanf("%d",&no);
     if(no>=0) 
       {
          printf("\n The factorial of %d is %d",no,factorial(no));
       }
     else 
       {
          printf("\n Input value must be greater than or equal to zero");
       }
     return 0;
  }
int factorial(int n)
  {
     if((n==0)||(n==1))
     return 1;
     else
     return (n * factorial(n-1));
  }
