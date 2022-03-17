#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            sum = sum + i; 
            /* code */
        }
        
    }
    printf("The sum is %d\n", sum);
    return 0; 
}