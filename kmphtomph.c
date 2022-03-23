#include <stdio.h>
int main()
{
    float kmph,mph;
    printf("kmph : ");
    scanf("%f", &kmph);
    
    mph = kmph/1.60934;
    printf("mph = %f\n",mph);

    return 0; 
}