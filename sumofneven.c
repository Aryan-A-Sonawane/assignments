#include <stdio.h>
int main()
{   int n;
    printf("Upto what numberdo you want to print the square series? ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d x %d = %d \n",i,i,i*i);
    }
    return 0;
}