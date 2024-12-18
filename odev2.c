#include <stdio.h>

int main(){

    int personel;
    int sicil[50];
    int satis[50];
    int n,i,fark,enbuyuk;

    printf("personel sayisini giriniz (max 50): ");                                 // satis ve sicil dizisinde alinacak girdi sayisinin belirlendigi alan
    while (1) {
        if (scanf("%d", &n) == 1 && n >= 1 && n <= 50) {
            break;
        } else {
            printf("hatali giris yaptiniz personel sayisini giriniz (max 50): ");   // istenilen deger girilene adar loopa girmesini saglayan alan
            while (getchar() != '\n');
        }
    }
                      
    for (i=0; i<n ; i++) {                                                          // iki dizinin girdi kismi
        printf("Personel sicil no ve satis miktarini girin(sicil, satis):");
        scanf("%d %d", &sicil[i], &satis[i]);
    }

    enbuyuk=satis[0];                        //satis dizisindeki en buyuk degerin karsilastirma yapilip tespit edildigi alan
    for(i=0 ; i<n ; i++) {  
        if(satis[i] > enbuyuk) {
        enbuyuk = satis[i];
        }
    }

    printf("personelin satmasi gereken miktar \n");
    printf("sicil   :");
    for(i=0 ; i<n ; i++){                   //birbiri arasinda bosluk birakarak dizideki degerlerin yazildigi alan
        printf("%d \t", sicil[i]);
    }

    printf("\nihtiyac :");                  //en buyuk degerin bulunup satis dizisindeki her elemandan cikartilip yazildigi alan
    for(i=0 ; i<n ; i++){
        fark=enbuyuk-satis[i];
        printf("%d \t", fark);
    }

    return 0;
}