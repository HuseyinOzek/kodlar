#include <stdio.h>

int main() {
    int sayi, teksayi, ciftsayi;

    printf("en fazla 6 basamakli bir tamsayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 1000000 || sayi < 0 ) {
        printf("lutfen en fazla 6 basamakli bir sayi giriniz.\n");
        scanf("%d", &sayi);
        return 1;
    }

    tekcift(sayi, &teksayi, &ciftsayi);

    printf("girilen sayinin icinde %d adet tek rakam, %d adet cift rakam bulunmaktadir.\n", teksayi, ciftsayi);

    return 0;
}


void tekcift(int sayi, int *teksayi, int *ciftsayi) {
    *teksayi = 0;
    *ciftsayi = 0;

    if (sayi < 0) {
        sayi = -sayi;
    }

    while (sayi > 0) {
        int rakam = sayi % 10; 
        if (rakam % 2 == 0) {
            (*ciftsayi)++;
        } else {
            (*teksayi)++;
        }
        sayi /= 10;
    }
}
