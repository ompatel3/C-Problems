#include <stdio.h>
int main()
{
    float height,width,perimeter;
    printf("Enter the height = ");
    scanf("%f",&height);
    printf("Enter the width = ");
    scanf("%f",&width);

    perimeter = 2.0*(height+width);
    printf("The perimeter of rectangle is %f\n",perimeter);

    return 0; 
}