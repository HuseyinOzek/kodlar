#include <stdio.h>


int main()
{
    double prices[]= {5.00, 10.00, 15.00, 20.00, 25.00, 30.00, 35.00};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}