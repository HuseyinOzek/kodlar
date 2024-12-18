#include <stdio.h>

int main() {
    int a, b, c;

    printf("3 farkli sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    // Sayıların farklı olup olmadığını kontrol et
    if (a == b || a == c || b == c) {
        printf("Lutfen rakamlari birbirinden farkli girin.\n");
        return 1;
    }

    // Ortanca sayıyı bul
    int ortanca;
    if ((a > b && a < c) || (a < b && a > c)) {
        ortanca = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        ortanca = b;
    } else {
        ortanca = c;
    }

    printf("Ortanca sayi: %d\n", ortanca);

    return 0;
}
