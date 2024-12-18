#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("birinci sayiyi giriniz: ");
    scanf("%d", &x);
    
    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("%d > %d", x , y);
    }
    else
    {
        printf("%d < %d", x , y);
    }

    return 0;
}