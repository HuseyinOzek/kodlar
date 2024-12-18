#include <stdio.h>

int main(){
    int sayi[5];
    int i;

    printf("5 adet sayi giriniz: \n");
    for(i=0 ; i<5 ; i++ )
        scanf("%d", &sayi[i]);
    printf("girilen sayilar sondan basa: \n");
    for(i=4 ; i>=0 ; i-- )
        printf("%d\n", sayi[i]);   
        
    return 0;
}