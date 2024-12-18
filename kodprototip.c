#include <stdio.h>

int main(){

    int dizi[5] = {10, 1, 27, 48, 50};
    int i;
    int enbuyuk=dizi[0];

    for(i=0 ; i<5 ; i++){
        if( dizi[i] > dizi[i+1]){
            enbuyuk=dizi[i];
        }
    }

    printf("%d", enbuyuk);


    return 0;
}