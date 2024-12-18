#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void renkMesajiYaz(int boyananRenkKodu, const char* renkler[]); //prototip

int main() {

    const char* renkler[10] = {"siyah", "kahverengi", "kirmizi", "turuncu", "sari", "yesil",  "mavi", "mor", "gri", "beyaz"}; // renkleri tanımlama

    srand(time(NULL)); //zamana bağlı rastgele değişen renk seçme işlemi

    int boyananRenkKodu ;
    
        while (1) {
        
        printf("boyanan rengin kodunu giriniz (0 ile 9 arasi): "); 
        scanf("%d", &boyananRenkKodu); // renk atama işlemi
        
        if (boyananRenkKodu >= 0 && boyananRenkKodu < 10) { // girdinin istenilen aralikta olup olmadiginin kontrolu
        break; 
    }
        printf("\n hatali giris yaptiniz, boyanan rengin kodunu giriniz (0 ile 9 arasi):"); 
    }

    
    printf("boyanan renk: %s (kod: %d)\n", renkler[boyananRenkKodu], boyananRenkKodu); // girilen kodun renkler araasinda hangisine denk geldigini yazan kod

    renkMesajiYaz(boyananRenkKodu, renkler);

    return 0;
}

void renkMesajiYaz(int boyananRenkKodu, const char* renkler[]) {
    int rastgeleKod;

    do {
        rastgeleKod = rand() % 10; // rastgele bir sayı seçip 10a bölüp kalanını alma islemi
    } while (rastgeleKod == boyananRenkKodu);

    printf("prensin istedigi renk: %s (kod: %d)\n", renkler[rastgeleKod], rastgeleKod);
}
