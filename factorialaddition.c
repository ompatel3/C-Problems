#include <stdio.h>

int factorial(int y)
{
    int fact = 1;
    for (int i = 1; i <= y; i++)
    {
        fact = fact *i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int y =1,sum = 0;

    for (int q = 0; q < n; q++)
    {
        int c = factorial(y);
        sum = sum + c;
        y = y +1;
    }
    printf("The sum is %d",sum);
    return 0; 
}