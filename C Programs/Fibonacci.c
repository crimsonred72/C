#include<stdio.h>

int main()
 {
    int n,i;
    int term1 = 0, term2 = 1;
    int nextterm = term1 + term2;
    printf("Enter the number of Terms:");
    scanf("%d",&n);
    printf("Series: %d, %d, %d, ", term1, term2, nextterm);
    for(i = 0; i<n-3; i++)
     {
        term1 = term2;
        term2 = nextterm;
        nextterm = term1+ term2;
        printf("%d, ",nextterm);
     }
    return 0;
 }
