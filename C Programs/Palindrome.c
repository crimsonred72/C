#include<stdio.h>
int main()
  {
    int m,n,r,s = 0;
    printf("Enter the numbers:");
    scanf("%d",&n);
    m=n;
    while(n>0)
      {
        r = n%10;
        n = n/10;
        s = s*10 + r;
      }
    if(s==m) 
      {
        printf("\n %d is a palindrome",m);
      }
    else 
      {
        printf("\n %d is not a palindrome",m);
      }
    return 0;
  }