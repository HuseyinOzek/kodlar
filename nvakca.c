#include <stdio.h>

int toplamUcret(int gunSayisi) {
    if (gunSayisi == 1) {
        return 3;
    }
    else {
        return toplamUcret(gunSayisi - 1) * 2;
    }
}

int main() {
    int gunSayisi;
    printf("calisma gun sayisini girin: ");
    scanf("%d", &gunSayisi);

    int toplam = 0;
    for (int i = 1; i <= gunSayisi; i++) {
        toplam += toplamUcret(i); 
    }

    printf("Toplam ucret: %d lira\n", toplam);
    return 0;
}
