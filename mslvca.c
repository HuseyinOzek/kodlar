#include <stdio.h>

int main() {
    int dogru, yanlis;
    float net;

    // Doğru ve yanlış sayısını kullanıcıdan alıyoruz
    printf("Doğru sayısını giriniz: ");
    scanf("%d", &dogru);

    printf("Yanlış sayısını giriniz: ");
    scanf("%d", &yanlis);

    // 4 yanlış bir doğruyu götürdüğü için net hesabı yapılır
    net = dogru - (yanlis / 4.0);

    printf("Net doğru sayınız: %.2f\n", net);

    // Seviyeyi belirlemek için net doğru sayısına göre switch-case yapısı kullanıyoruz
    int seviye = (int)net;  // Net doğru sayısını tam sayıya çeviriyoruz

    switch (seviye) {
        case 0 ... 10:
            printf("Başlangıç seviyesi.\n");
            break;
        case 11 ... 20:
            printf("Orta seviye.\n");
            break;
        case 21 ... 30:
            printf("İleri seviye.\n");
            break;
        default:
            if (seviye > 30)
                printf("Profesyonel seviye.\n");
            else
                printf("Geçerli bir sonuç bulunamadı.\n");
            break;
    }

    return 0;
}
