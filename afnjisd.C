#include <stdio.h>

int main(){

    int notlar[10];
    int i;
    double toplam=0, ortalama;

    printf("10 not giriniz: \n");
    for(i=0 ; i<10 ; i++){
        scanf("%d", &notlar[i]);
    toplam=toplam + notlar[i];
    ortalama=toplam/10;}
        printf("ortalama: %.2f \n", ortalama);
        printf("ortalamnin ustundeki notlar: ");
        for(i=0 ; i<9 ; i++)
            if( notlar[i]> ortalama){
                printf("%d \n", notlar[i]);
            }
    return 0;
}