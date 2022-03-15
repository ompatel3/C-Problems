#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    
    int array1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i );
        scanf("%d",&array1[i]);
    }
    int  sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + array1[i];
    }
    
    printf("The sum of array is %d\n", sum );       
    
    
    return 0; 
}