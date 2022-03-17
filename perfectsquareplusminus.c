// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     float sum = 0;

//     for (int i = 2; i < (n+1); i++)
//     {
//         if (i%2 == 0)
//         {
//             sum = sum + (i*i);
//         }
        
//         else
//         {
//             sum = sum - (i*i);
//         }
//     }

//     printf("The sum is %f",(1+sum));   
//     return 0; 
// }

//Alternative method

#include <stdio.h>
int main()
{
    int n,sign =1 ;
    printf("Enter the number : ");
    scanf("%d", &n);
    float sum = 1;

    for (int i = 2; i <= n; i++)
    {
     sum = sum + (i*i*sign) ;
     sign = sign * (-1);
    }

    printf("The sum is %f",(sum));   
    return 0; 
}