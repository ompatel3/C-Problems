#include <stdio.h>
int main()
{
    // int a,b,c,d,e,f,g;
    // printf("Enter any 5 numbers - ");
    // scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    // int avg; 
    // avg = (a+b+c+d+e)/5;
    // printf("The average of five numbers is %d",avg);
    // return 0; 

    int sum = 0;
    printf("Enter the number - ");

    for (int i = 0; i < 5; i++)
    {
        int number;
        scanf("%d",&number);
        sum = sum + number;
    }

    int avg;
    avg = sum/5;
    printf("Average - %d\n", avg );

}