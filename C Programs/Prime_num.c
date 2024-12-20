#include <stdio.h>
int main()
 {
    int i, n, m, flag = 0;
    printf("\n Enter a positive integer greater than 1 : ");
    scanf("%d", &n);
    if (n <= 1)
     {
        printf("\nThe number should be greater than 1");
     }
    else
     {
        for (i = 2; i < n; i++)
         {
            m = n % i;
            if (m == 0)
             {
                flag = 1;
                break;
             }
         }
        if (flag == 0)
            printf("\n The number %d is a prime number", n);
        else
            printf("\n The number %d is not a prime number", n);
     }
    return 0;
 }
