#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i*i*i);
    }

    printf("The sum is : %f\n",sum);
    return 0; 
}