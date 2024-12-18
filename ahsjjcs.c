#include <stdio.h>
#include <ctype.h> // toupper fonksiyonu için gerekli

int main() {
    char metin[] = ("Eriyordum sensiz Muma donmus kalbi hic gormezdin Niye, neden, neden, neden? Ve uzatmak yersiz Nasil olsa yoldan dondurmezdin Niye, neden, neden, neden? Of Veryansin edemem kadere Sevdim, bu benim meselem Egilsem bile devrilmem Sor Donmezsem sebebi ne? diye Aydim iyiye, kotuye Gel gor ki cok zor"); 

    int i = 0;

    printf("Orijinal metin: %s\n", metin);

    // Her karakteri kontrol et ve büyük harfe çevir
    while (metin[i] != '\0') { // Metnin sonuna kadar
        metin[i] = toupper(metin[i]); // Karakteri büyük harfe çevir
        i++;
    }

    printf("Büyük harfli metin: %s\n", metin);

    return 0;
}
