#include <stdio.h>

int main()
{
    int n,c=0;
    printf("Enter a number to calculate number of digits in it: ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10; 
        c++;
    }
    printf("Number of digits: %d ",c);
    return 0;
}