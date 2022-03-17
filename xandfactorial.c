#include <stdio.h>
#include <math.h>


int factorial(int y)
{
    int fact = 1;
    for (int i = 1; i <= y; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    float sum = 0,x;
    int y = 2;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Enter the value of x : ");
    scanf("%f", &x);
    
    
    for(int i =1; i < n ;i++)
    {
        sum = sum + (pow(x,y)/factorial(y));
        y = y + 2;
    }

    printf("sum = %f",(x+sum));
    return 0; 
}