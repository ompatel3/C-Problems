#include <stdio.h>
int main()
{
    float rad;
    printf("Enter the radius - ");
    scanf("%f",&rad);

    float vol;
    vol = (4 * 22 * rad * rad * rad)/(3*7);

    printf("Volume of sphere = %f",vol);


    return 0; 
}


