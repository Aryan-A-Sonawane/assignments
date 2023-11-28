#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, temp, f = 0;
    printf("Enter numbers of integers to compare: ");
    scanf("%i", &n);
    int a[n];
    // bool check;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }
    //while (f = 1)
    

        // f = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    f = 1;
                }
                
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d, ", a[i]);
        }
    // }

    return 0;
}
