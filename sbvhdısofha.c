#include <stdio.h>

int main()
{
    int kodlar[5] = {101, 102, 103, 104, 105};
    float fiyatlar[5] = {10.5, 8.75, 12.3, 9.6, 7.2};
    
    int girilenKod;
    float toplamFiyat = 0.0;
    int i, bulundu;
    int count = 0;
    char o,O,m,M;
    char x;


    printf("toplanacak kalemlerin kodlarini giriniz (bitirmek icin -1 girin):\n");

    while(1){
        printf("kalem kodunu giriniz:");
        scanf("%d", &girilenKod);

        if(girilenKod == -1){
            break;
        }
        bulundu = 0;
        count ++;

        for(i=0; i<5; i++){
            if(girilenKod == kodlar[i]){
                toplamFiyat += fiyatlar[i];
                bulundu = 1;
                break;
            }
        }
            if (!bulundu) {
            printf("Gecersiz kod lutfen tekrar deneyin.\n");
        }
    }

    printf("ogrenci misiniz misafir mi?(O/M): ");
    scanf("%s", &x);

    while(x != 'o' && x != 'O' && x != 'm' && x != 'M') {
        printf("hatali giris yaptiniz tekrar giriniz (O/M): ");
        scanf(" %c", &x);
        
    }

    if(x == 'o' || x == 'O'){
        toplamFiyat = toplamFiyat -(toplamFiyat * 0.1);
        if(count > 5){
            toplamFiyat = toplamFiyat - (toplamFiyat * 0.05);
        }
        printf("%.2lf", toplamFiyat);
    }

    else if(x == 'm' || x == 'M'){
        printf("%.2lf", toplamFiyat);
    }
    
    return 0;
}