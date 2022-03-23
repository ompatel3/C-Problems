#include <stdio.h>
#define PI 3.14

int main()
{
    float radius,volume;
    printf("Enter the value of r - ");
    scanf("%f",&radius);

    volume = (4.0/3.0) * PI * radius* radius* radius;
    printf("The volume of sphere is %f\n",volume);



    return 0; 
}