#include <stdio.h>

int main(){

    int elemanA[5]; 
    int elemanB[5];
    int ortakEleman[5];
    int i,j,x=0;

    printf("a dizisinin elemanlarini giriniz: ");       // elemanlarin girdileri
    for(i=0 ; i<5 ; i++){
        scanf("%d", &elemanA[i]);
    }
        printf("b dizisinin elemanlarini giriniz: ");
    for(j=0 ; j<5 ; j++){
        scanf("%d", &elemanB[j]);
    }

    printf("a dizisinin elemanlari: ");                 // ilk 2 dizideki elemanlarin ciktisi
    for(i=0 ; i<5 ; i++)
                printf("%d ", elemanA[i]); 
    printf("\nb dizisinin elemanlari: ");
    for(j=0 ; j<5 ; j++)
                printf("%d ", elemanB[j]);

        for(i=0 ; i<5 ; i++) {                          // iki dizideki elemanlarin tek tek karsilastirilip ayni olanlarin 3. bir diziye kaydedilmesi
            for(j=0 ; j<5 ; j++) {
                if (elemanA[i] == elemanB[j]){
                    ortakEleman[x] = elemanA[i];
                    x++;
                    break;
                }
            }
        }

    printf("\niki dizideki ortak elemanlar: ");         // olusturulan 3. dizideki elemanlarin yazilmasi
    for(i=0 ; i<x ; i++){
        printf("%d ", ortakEleman[i]);
    }

    return 0;
}