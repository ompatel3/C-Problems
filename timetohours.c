#include <stdio.h>
int main()
{
    
    int minutes, hours, mins;
    printf("Enter the number of minutes : ");
    scanf("%d", &minutes);
    
    hours = minutes/60;
    mins = minutes%60;

    printf("Hours = %d\n",hours);
    printf("Minutes = %d\n",mins);

    return 0; 
}