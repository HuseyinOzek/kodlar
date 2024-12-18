#include <stdio.h>

int main() {
    int sayi, birler, onlar, yuzler, binler;

    printf("Dort basamakli bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Binler basamağı
    binler = sayi / 1000;

    // Yüzler basamağı
    yuzler = (sayi / 100) % 10;

    // Onlar basamağı
    onlar = (sayi / 10) % 10;

    // Birler basamağı
    birler = sayi % 10;

    printf("Binler basamagi: %d\n", binler);
    printf("Yuzler basamagi: %d\n", yuzler);
    printf("Onlar basamagi: %d\n", onlar);
    printf("Birler basamagi: %d\n", birler);

    return 0;
}
