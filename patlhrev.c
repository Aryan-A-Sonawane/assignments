#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter number of rows to print in the pattern: ");
    scanf("%d",&n);
    for(int i = n; i>0;i--)
    {
        for(int j=0; j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}