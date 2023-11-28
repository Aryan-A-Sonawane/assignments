#include <stdio.h>
int main()
{
    int p[72];            //present roll nos
    int all[72];          //all roll nos sample set
    int a[72];            //absent roll nos
    char ans='y';
    int c=0;
    for(int i=0;i<72;i++)   //zeroing of values for safer executions
    {
        all[i]=i+1;
        p[i]=0;
        a[i]=0;
        
    }
    //ask for exit instead of asking y each time
    for(int i=0;i<72;i++)
    {
        printf("Do you wanna add roll no?");
        scanf(" %c",&ans);
        if(ans=='y')
        {
           printf("Enter roll no:\n");
           scanf("%d", &p[i]);
        }
        else if(ans=='n')
        {
            printf("Done...\n");
             break;
        }
    }

    //checking present roll nos.
    // for(int i=0;i<72;i++)
    // {
    //     printf("%d, ",p[i]);
    // }
    // printf("\n");
    // printf("Hello out from print\n");
    
    for(int i=0;i<72;i++)
    { 
        // printf("Hello, in the next for\n");
        a[i]=all[i];
        int j=0;
        // printf("%d, ",all[i]); checking all[] ..right..
       for(j=0;j<72;j++)
       {
        if(all[i]==p[j])
        {
            // printf("Hello, equal found\n");
            a[i]=0;
             c++;
             break;
        }      
       }
        
    }
    printf("Absent Roll nos: \n");
    for(int i=0;i<72;i++)
    {
        
        if(a[i]!=0)
        {
             printf("%i, ",a[i]);
        }
    }
    printf("\nTotal Students Present: %d\n",c);
    printf("Total Students Absent : %d\n",72-c);
    printf("Total Students        : 72\n");
}

// scanf ke pehle char kospace daal ke 
// ignore karna in 2nd for loop as it considrs one char previous for loop for its next exuction
// Sample Output:
// Absent Roll nos:
// 3, 7, 12, 20, 21, 23, 32, 34, 41, 54, 61, 67, 71,
// Total Students Present: 59
// Total Students Absent : 13
// Total Students        : 72