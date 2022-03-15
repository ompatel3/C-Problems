#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array = ");
    scanf("%d",&n);

    int tree[n];

    for (int i = 0; i < n; i++)
    {
        printf("Element %d = ",i);
        scanf("%d",&tree[i]);
    }

    printf("The array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tree[i]);
    }

    printf("\nThe reversd array is :\n");

    for (int i = (n-1); i >= 0; i--)
    {
        printf("%d ", tree[i]);
    }
    
    return 0; 
}