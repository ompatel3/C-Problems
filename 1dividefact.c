#include <stdio.h>

float factorial(int y)
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
    int n,y =1;
    float sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for (float i = 1; i < n; i++)
    {
        sum = sum + (i/factorial(y));
    }
    
    printf("The sum is : %d\n", sum);
    return 0; 
}