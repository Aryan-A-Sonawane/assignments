#include <stdio.h>

int main()
{   int n,fact=1;
    printf("Enter n to print factorials of numbers upto n: ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        fact*=i;
        printf("%d, ",fact);
    }
}   