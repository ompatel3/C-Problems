#include <stdio.h>
#include <math.h>

//  QUESTION  : 1 - x+x^2/2! - x^3/3! + x^4/4! ........ - x^9/9!
// The values pf x varies from 0.1 t0 1.0 in step of 0.1 in above series.
// print the output for each value of x

int factorial(int y)
{
    int fact = 1;
    for (int i = 1; i <= y; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int sign = -1, y = 1;
    float x;
    float sum = 1;

    for (x = 0.1; x <= 1.0; x = x + 0.1)
    {
        for (int i = 1; i < 10; ++i)
        {     
            sum = sum + ((pow(x, y) / factorial(y)) * sign);
            sign = sign * (-1);
            y = y + 1;
        }
        printf("x = %f, sum is = %f\n", x, sum);
    }
    return 0;
}

/*Output :
x=0.100000      sum=0.904837
x=0.200000      sum=0.818731
x=0.300000      sum=0.740818
x=0.400000      sum=0.670320
x=0.500000      sum=0.606531
x=0.600000      sum=0.548812
x=0.700000      sum=0.496585
x=0.800000      sum=0.449329
x=0.900000      sum=0.406570
*/