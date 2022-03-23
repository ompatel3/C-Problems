#include <stdio.h>
int main()
{
    float angle1,angle2;
    printf("Enter two angles seperated by comma - ");
    scanf("%f,%f",&angle1,&angle2);

    printf("Angle 3 is %f",(180-angle1-angle2));

    return 0; 
}