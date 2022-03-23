#include <stdio.h>
int main()
{
    float n,m;
    printf("Enter two numbers seperated by comma : ");
    scanf("%f,%f", &n,&m);
    
    printf("Addition : %f \n", n+m);
    printf("Subtraction : %f \n", n-m);
    printf("Multiplication : %f \n", n*m);
    printf("Division : %f \n", n/m);
    return 0; 
}