#include <stdio.h>

int main(){

    int sayi,ilkiki,soniki,islem;
     
    printf("bir sayi giriniz: ");
    scanf("%d", &sayi);

    ilkiki = (sayi / 100) %100 ;
    soniki = sayi %100 ;

    printf(" %d", ilkiki);
    printf("\n %d", soniki);

    if(sayi == (ilkiki + soniki)*(ilkiki + soniki)){
        printf("\n bu ifade bir yarimkaredir.");
    }
    else{
        printf("\n bu ifade bir yarimkare degildir.");
    }


    return 0;
}