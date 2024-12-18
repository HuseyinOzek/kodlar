#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    int yas;
    int x,y,z;

    printf("yasinizi giriniz: ");
    scanf("%d", &yas);

    printf("3 sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    x = abs(yas - a);
    y = abs(yas - b);
    z = abs(yas - c);

    if(x < y && x < z){
        printf("en dusuk yas farki 1. : %d", x);
    }
    else if(y < x && y < z){
        printf("en dusuk yas farki 2. : %d", y);
    }
    else {
        printf("en dusuk yas farki 3. : %d", z);
    }

    return 0;
}