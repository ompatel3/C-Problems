#include <stdio.h>
int main()
{
    int n,sign = 1;
    float sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1.0/(i*i)*sign);
        sign = sign * (-1);
    }
    printf("Sum is %f\n",sum);
    return 0; 
}