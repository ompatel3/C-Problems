#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int k = 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + k;
        k = k*2;
    }
    printf("sum=%d\n",sum);

    return 0; 
}