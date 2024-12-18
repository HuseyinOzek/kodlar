#include <stdio.h>  
int main()
{
    const double PI= 3.14159;
    double yaricap;
    double cevre;
    double alan;
    
    printf("\n enter radius of a circle:");
    scanf("%lf", &yaricap);

    cevre = yaricap * PI * 2;
    alan = yaricap * yaricap * PI;
    printf("cevre = %lf", cevre);
    printf("\nalan = %lf", alan);
   
}