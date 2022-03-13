#include <stdio.h>
int main()
{
    int number, holder = 0 , taker;
    printf("Enter the number : ");
    scanf("%d",&number);

    while(number>0)
    {
        taker = number%10;
        holder = (holder*10) + taker;
        number = number / 10;

    }

    printf("Reversed number : %d",holder);
    return 0; 
}