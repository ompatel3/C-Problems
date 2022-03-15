#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a = 1, b = 1, c = 1;
    for (int i = 2; i < n; i++)
    {
        a = b;
        b = c;
        c = a+b;
        if (n == 1 || n == 2)
        {
            c = 1;
            break;
        }
    }

    printf("%d\n",c); 
    return 0; 
}