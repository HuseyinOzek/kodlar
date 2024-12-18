#include <stdio.h>

int main(){

    char s[30];
    int isimuzunlugu=0;


    printf("isim girin: ");
    scanf("%10s", &s);

    while( s[isimuzunlugu]!= '\0')
        isimuzunlugu++;

    for(isimuzunlugu; isimuzunlugu > -1; isimuzunlugu--)
        printf("%c", s[isimuzunlugu]);

    return 0;
}