#include <stdio.h>

int main(){

    int n[5]={ 13, 12, 0, 5, 8};
    int i;
    int aranacak;
    int yer = -1;

    printf("aranacak elemani giriniz: ");
    scanf("%d", &aranacak );
        for(i=0 ; i<5 ; i++)
            if( n[i] == aranacak ){
                yer = i;}
            if( yer != -1){
                printf("aranilan deger dizide %d nolu indiste bulunmaktadir.", yer);}
            else{
                printf("aranilan eleman dizide bulunmamaktadir.");}     

    return 0;
}