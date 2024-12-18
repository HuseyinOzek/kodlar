#include <stdio.h>

int main()
{
    int i = 0;
    int toplam = 0;

    while(i <= 100)
    {
        toplam = toplam + i;
        i++;
    }
    
    printf("%d", toplam);

    return 0;
}
