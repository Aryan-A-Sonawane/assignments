#include <stdio.h>
int main()
{
  for(int i=2;i<=100;i++) //no need to check for 1
  {
    int c=0;
    for(int j=1;j<i;j++) 
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(i==2 && c==1)
    {
      printf("%d",i);
    }
    else if(c==1)
      {
        printf(", %d",i);
      }
    if(i==100)
    {
      printf(".");
      break;
    }
    
  }
  return 0;
}