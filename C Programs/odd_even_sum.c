#include<stdio.h>

void oesum(int a[],int n)
  {
    int osum = 0 ,esum = 0,i;
    for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
         {
            esum = esum+ a[i];
         }
        else 
         {
            osum = osum + a[i];
         }
      }
    printf("\n Sum of Odd Numbers: %d",osum);
    printf("\n Sum of Even Numbers: %d",esum);
  }
int main() 
  {
     int n,i,a[100];
     printf("\nEnter the number count:");
     scanf("%d",&n);
     printf("\nEnter the numbers:");
     for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
     printf("Your numbers:");
     for(i=0;i<n;i++)
      {
        printf("%d\n",a[i]);
      }
     oesum(a,n);
return 0;
  }