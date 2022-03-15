#include <stdio.h>
// factorial = 5! = 5 x 4 x 3 x 2 x  1 = 120
int main()
{
    int n, fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d",fact);
    

    return 0; 
}