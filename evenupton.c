#include <stdio.h>
int main()
{   int n;
    printf("Upto what number do you want to print even numbers? ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) //condition to check for even numbers
        printf(" %d \n",i);
    }
    return 0;
}