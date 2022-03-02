#include <stdio.h>

int main(int argc, char const *argv[])
{
    //factorial - 5! = 5 x 4 x 3 x 2 x 1 = 120

    int n , sum = 1, fact = 1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int m = n;
    
    if (n == 0 || n == 1)
    {
        printf("The factorial of entered number is 1");
    }
    
    else
    {
        for (int i = 0; i < n; i++)

            {
                sum = sum * (m * fact);
                m = m - 1;
            }

        printf("The factorial of is %d",sum);
    }
    
    return 0;
}
