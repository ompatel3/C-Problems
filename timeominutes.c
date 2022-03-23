#include <stdio.h>
int main()
{
    float hours, minutes, total;

    
    printf("Enter the number of hours : ");
    scanf("%f", &hours);

    printf("Enter the number of minutes : ");
    scanf("%f", &minutes);
    
    total = (hours*60.0) + minutes;
    printf("Total minutes = %f",total);


    return 0; 
}