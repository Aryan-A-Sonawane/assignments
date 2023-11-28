#include <stdio.h>
int main()
{
   int n=0,i;
    printf("Enter number of rows to print in the pattern: ");
    scanf("%d",&n);
    for(i = n; i>0;i--)
    {
        int k=i;
        for(int j=n-(i-1);j>0;j--)
        {
            printf("*");
        }
        for(int j=k-1;j>0;j--)
        {
             printf("  ");
             k-=1;
        }
        // for(int r=i-1;r>0;r--)
        // {
        //     printf(" ");
        // }
       for(int m=n-i;m>=0;m--)
       {
        printf("*");
       }
      
       printf("\n");
        
        
    }
    return 0;
}