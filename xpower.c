// x + x^2 + x ^3 ..... + x^n

#include <stdio.h>
#include <math.h>
int main()
{
    int n,y=1;
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(x,y);
        y = y +1;
    }

    printf("The sum is %d\n",sum);
    

    
    return 0; 
}