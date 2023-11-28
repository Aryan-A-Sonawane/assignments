#include <stdio.h>
int main()
{   int n,sum=0;

    printf("Upto what number do you want to print the sum?");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum upto %d is %d\n",n,sum);
    return 0;
}