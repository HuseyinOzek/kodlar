#include <stdio.h>

struct Ogrenci {
    int numara;
    int not;
    char isim[50];
};

int main() {
    struct Ogrenci ogrencii[50];
    int toplam; 
    int enbuyuknot = -1; 
    int enbuyuk = -1; 

    printf("Toplam ogrenci sayisini giriniz (max %d): ", 50);
    scanf("%d", &toplam);

    if (toplam > 50 || toplam <= 0) {
        printf("Hatali ogrenci sayisi girdiniz.\n");
        return 1;
    }

    for (int i = 0; i < toplam; i++) {
        printf("\n%d. ogrencinin bilgilerini giriniz:\n", i + 1);
        printf("Isim: ");
        scanf(" %s", ogrencii[i].isim); 
        printf("Numara: ");
        scanf("%d", &ogrencii[i].numara);
        printf("Not: ");
        scanf("%d", &ogrencii[i].not);

        if (ogrencii[i].not > enbuyuknot) {
            enbuyuknot = ogrencii[i].not;
            enbuyuk = i; 
        }
    }

    if (enbuyuk != -1) {
        printf("\nEn yuksek not alan ogrenci:\n");
        printf("Isim: %s\n", ogrencii[enbuyuk].isim);
        printf("Numara: %d\n", ogrencii[enbuyuk].numara);
        printf("Not: %d\n", ogrencii[enbuyuk].not);
    }

    return 0;
}
