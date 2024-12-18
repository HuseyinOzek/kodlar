#include <stdio.h>

int main(){

    int n[5] = { 13, 12, 0, 5, 8};
    int gecis;
    int i;
    int yedek;

    printf("dizinin sirasiz hali: \n");
    for(i=0 ; i<5 ; i++)
        printf("%d \t", n[i]);

    for(gecis=1 ; gecis<5 ; gecis++)
        for(i=0 ; i<5-1 ; i++)
        if( n[i] > n[i+1]){
            yedek = n[i];
            n[i] = n[i+1];
            n[i+1] = yedek;
        }    

    printf("\n Dizinin sirali hali: \n");
    for(i=0 ; i<5 ; i++)
        printf("%d \t", n[i]);

    return 0;
}               