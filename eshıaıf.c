#include <stdio.h>

int main(){

    int a,b,c;
    int sayi;

    printf("3 basamakli sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 999 || sayi < 100){
        printf("lutfen gecerli bir sayi giriniz: ");
        return 1;
    }

    a = sayi / 100;
    b = (sayi / 10) %10;
    c = sayi %10;   

if (a == b || a == c || b == c) {
        printf("Lutfen rakamlari birbirinden farkli bir sayi girin.\n");
        return 1;
    }

    if (a > c && a > b && b > c){
        printf("%d%d%d",a,b,c);
    }
    else if (a > c && a > b && c > b){
        printf("%d%d%d",a,c,b);
    }
    else if (b > a && b > c && c > a){
        printf("%d%d%d",b,c,a);
    }
    else if (b > a && b > c && a > c){
        printf("%d%d%d",b,a,c);
    }
    else if (c > a && c > b && b > a){
        printf("%d%d%d",c,b,a);
    }
    else {
        printf("%d%d%d",c,a,b);
    }
    return 0;
}