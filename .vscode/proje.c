#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256  // Her satırın maksimum uzunluğu

int main() {
    FILE *dosya1, *dosya2;
    char **satir = NULL;                // Satırları saklamak için dinamik dizi
    char geciciDeger[MAX_LINE_LENGTH];  // Geçici satır okuma 
    int satirSayisi = 0;                // Toplam satır sayısı, başta 0
    int tespit = -1;                    // Tespit edilen satır, başta -1

    dosya1 = fopen("C:\\Users\\husey\\Desktop\\giris.txt", "r");    // Dosya okumaya başlama fonksiyonu
    if (dosya1 == NULL) {
        perror("Dosya acilamadi");      // Dosya açma başarısız olursa yazılacak olan hata komutu
        return 1;
    }

    while (fgets(geciciDeger, MAX_LINE_LENGTH, dosya1) != NULL) {   // Dosyadakı her satırı tek tek okuma fonksiyonu
        geciciDeger[strcspn(geciciDeger, "\n")] = '\0';         // Satır sonunda \n varsa hata oluşmasın diye silmeye yarayan fonksiyon

        char **yedek = realloc(satir, (satirSayisi + 1) * sizeof(char *));   // null olarak atanan satır değişkenini yeniden yapılandırma fonksiyonu
        if (yedek == NULL) {
            perror("Bellek yeniden ayirma basarisiz");      // Bellek ayırma başarısız olursa yazılacak olan hata komutu
            free(satir);            // Bellek tüketiminin önüne geçmek için hata sonrası satırları serbest bırakma komutu
            fclose(dosya1);         // 1. Dosyası kapama komutu
            return 1;
        }
        satir = yedek;      // Kod hatasızsa satırın geçici bir değere kaydı

        satir[satirSayisi] = malloc(strlen(geciciDeger) + 1);       // Oluşturulacak dizi için alan tahsisi sağlayan fonksiyon (dizi sonundaki null karakter için +1 eklenir)
        if (satir[satirSayisi] == NULL) {           
            perror("Bellek ayirma basarisiz");      // dizi yazma başarısız olursa yazılacak olan hata komutu
            for (int i = 0; i < satirSayisi; i++) {     // Hatanın olduğu dizideki elemana kadar teker teker serbest bırakma fonksiyonu
                free(satir[i]);
            }
            free(satir);            // Bellek tüketiminin önüne geçmek için hata sonrası satırları serbest bırakma komutu
            fclose(dosya1);         // 1. Dosyası kapama komutu
            return 1;
        }
        strcpy(satir[satirSayisi], geciciDeger);      // Geçici olarak alınan değerlerin diziye kaydedilmesini sağlayan fonksiyon
        satirSayisi++;      // Her kayıt sonrası dizinin boyutunu belirlemek için 1 arttırma komutu
    }

    fclose(dosya1); // 1. Dosyası kapama komutu

    for (int i = 0; i < satirSayisi; i++) {        // Aynı satırları tespit etme fonksiyonu
        for (int j = i + 1; j < satirSayisi; j++) {     // Dış döngü iç döngüdeki elemanlarla tek tek karşılaştırma yapar
            if (strcmp(satir[i], satir[j]) == 0) {      // Eğer iki eleman aynıysa 0 değeri döndürür
                tespit = i;  // Bulunan satırın indeksini kaydet
                break;       // Aynı satır bulunduğunda 2.döngüden çık
            }
        }
        if (tespit != -1) {
            break;  // Aynı satır bulunduğunda 1. döngüden çık
        }
    }

    // Dosyayı yazma
    dosya2 = fopen("C:\\Users\\husey\\Desktop\\casus.txt", "w");    // Dosya yazmaya başlama fonksiyonu
    if (dosya2 == NULL) {
        perror("Dosya acilamadi");      // Dosya açma başarısız olursa yazılacak olan hata komutu
        return 1;
    }

    if (tespit != -1) {
        fprintf(dosya2, "Ayni satir bulundu: %s\n", satir[tespit]);     // Aynı satır bulunduysa bulunan o elemanı yazdır
    } else {
        fprintf(dosya2, "Ayni satir bulunamadi.\n");        // Eğer aynı eleman bulunmadıysa bulunmadığını yazdır
    }

    fclose(dosya2);     // 2. dosyayı kapat

    for (int i = 0; i < satirSayisi; i++) {
        free(satir[i]);     // Dizideki elemanları teker teker serbest bırakma fonksiyonu
    }
    free(satir);  // Dizi için ayrılan belleği serbest bırakma komutu

    return 0;
}
