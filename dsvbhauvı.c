#include <stdio.h>

void cevir(int *dizi, int boyut) {
    int temp;
    int i = 0, j = boyut - 1;

    while (i < j) {

        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;

        i++;
        j--;
    }
}

int main() {
    int dizi[10];
    int i;

    printf("10 not giriniz: \n");
    for(i=0 ; i<10 ; i++){
        scanf("%d", &dizi[i]);
    }

    printf("orjinal dizi: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    cevir(dizi, 10);

    printf("ters cevrilmis dizi: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
