#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            sum = sum + i;
        }
        
    }
    printf("The sum is : %d\n", sum);

    return 0; 
}