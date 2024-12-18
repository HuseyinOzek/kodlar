#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256  // Her satırın maksimum uzunluğua

int main() {
    FILE *file, *file2;
    char **lines = NULL;  // Satırları saklamak için dinamik dizi
    char buffer[MAX_LINE_LENGTH]; // Geçici satır okuma tamponu
    int lineCount = 0;     // Toplam satır sayısı
    int detect = -1;       // Tespit edilen satır (başlangıçta -1, herhangi bir satır bulunmadı)

    // Dosyayı açma
    file = fopen("C:\\Users\\husey\\Desktop\\giris.txt", "r");
    if (file == NULL) {
        perror("Dosya acilamadi");
        return 1;
    }

    // Dosyayı satır satır okuma
    while (fgets(buffer, MAX_LINE_LENGTH, file) != NULL) {
        // Satır sonu karakterini kaldırma (varsa)
        buffer[strcspn(buffer, "\n")] = '\0';

        // Bellek yeniden ayırma
        char **temp = realloc(lines, (lineCount + 1) * sizeof(char *));
        if (temp == NULL) {
            perror("Bellek yeniden ayirma basarisiz");
            free(lines);
            fclose(file);
            return 1;
        }
        lines = temp;

        // Yeni satır için bellek ayırma ve kaydetme
        lines[lineCount] = malloc(strlen(buffer) + 1);
        if (lines[lineCount] == NULL) {
            perror("Bellek ayirma basarisiz");
            for (int i = 0; i < lineCount; i++) {
                free(lines[i]);
            }
            free(lines);
            fclose(file);
            return 1;
        }
        strcpy(lines[lineCount], buffer);
        lineCount++;
    }

    fclose(file);

    // Aynı satırları tespit etme
    for (int i = 0; i < lineCount; i++) {
        for (int j = i + 1; j < lineCount; j++) {
            if (strcmp(lines[i], lines[j]) == 0) {
                detect = i;  // Aynı satır bulundu, ilk bulunan satırın indeksini kaydet
                break;       // İlk aynı satır bulunduğunda döngüden çık
            }
        }
        if (detect != -1) {
            break;  // İlk aynı satır bulunduğunda dış döngüden çık
        }
    }

    // Dosyayı yazma
    file2 = fopen("C:\\Users\\husey\\Desktop\\casus.txt", "w");
    if (file2 == NULL) {
        perror("Dosya acilamadi");
        return 1;
    }

    // Eğer bir aynı satır bulunduysa, onu yazdır
    if (detect != -1) {
        fprintf(file2, "Ayni satir bulundu: %s\n", lines[detect]);
    } else {
        fprintf(file2, "Ayni satir bulunamadi.\n");
    }

    fclose(file2);

    // Bellek serbest bırakma
    for (int i = 0; i < lineCount; i++) {
        free(lines[i]);
    }
    free(lines);  // Dizi için ayrılan belleği serbest bırakma

    return 0;
}
