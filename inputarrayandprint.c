#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array = ");
    scanf("%d",&n);
    int ary[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d = ",i );
        scanf("%d",&ary[i]);
    }

    printf("The array is \n");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", ary[i]);
    }
     

   
    return 0; 
}