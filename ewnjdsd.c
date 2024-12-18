#include <stdio.h>

// Özyinelemeli OBEB fonksiyonu
int obeb(int a, int b) {
    if (b == 0) {
        return a;
    }
    return obeb(b, a % b);
}

int main() {
    int sayi1, sayi2;
    printf("İki tam sayı giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    int sonuc = obeb(sayi1, sayi2);
    printf("Girilen sayilarin OBEB'i: %d\n", sonuc);

    return 0;
}
