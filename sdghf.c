#include <stdio.h>

int main() {
    // Kalem kodları ve fiyatları
    int kodlar[5] = {101, 102, 103, 104, 105};
    float fiyatlar[5] = {10.5, 8.75, 12.3, 9.6, 7.2};
    
    int girilenKod;
    float toplamFiyat = 0.0;
    int i, bulundu;

    printf("Toplanacak kalemlerin kodlarini giriniz (bitirmek icin -1 girin):\n");
    
    while (1) {
        printf("Kalem kodu: ");
        scanf("%d", &girilenKod);
        
        if (girilenKod == -1) { // Çıkış için -1 kontrolü
            break;
        }

        bulundu = 0; // Kodun bulunup bulunmadığını kontrol etmek için
    
        // Kodun dizide olup olmadığını kontrol et
        for (i = 0; i < 5; i++) {
            if (girilenKod == kodlar[i]) {
                toplamFiyat += fiyatlar[i];
                bulundu = 1;
                break;
            }
        }

        if (!bulundu) {
            printf("Gecersiz kod, lutfen tekrar deneyin.\n");
        }
    }

    printf("Toplam Fiyat: %.2f TL\n", toplamFiyat);

    return 0;
}
