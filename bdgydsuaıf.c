#include <stdio.h>

int main(){

    int t,m,i;
    float thesap,mhesap,ihesap;

    printf("trafik yanlis sayisi: ");
    scanf("%d", &t);
    printf("motor yanlis sayisi: ");
    scanf("%d", &m);
    printf("ilk yardim yanlis sayisi: ");
    scanf("%d", &i);

    thesap = (50 - t)* 2;
    mhesap = (40 - m)* 2.5;
    ihesap = (30 - i)* 3.33333;

    printf("\n trafik puani: %.2f", thesap); 
    printf("\n motor puani: %.2f", mhesap);
    printf("\n ilk yardim puani: %.2f", ihesap);

    if(ihesap >= 70 && mhesap >= 70 && thesap >= 70){
        printf("\n gectiniz");
    }
    else {
        printf("\n gecemediniz");
    }



    return 0;
}