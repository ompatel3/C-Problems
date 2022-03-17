#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; 
    }
    printf("The sum is %d\n", sum);
    return 0; 
}