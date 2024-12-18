#include <stdio.h>

int main ()
{
    char d;
    char D; // daire
    char k;
    char K; // kare
    char x;
    int uzunluk;
    int yaricap;
    float pi = 3.14;
    float cevap;

    printf("geometrik cismi giriniz:");
    scanf("%c", &x);

    
    if( x == 'k'|| x == 'K' )
    {
        
        printf("karenin bir kenarini giriniz:");
        scanf("%d", &uzunluk);
        cevap = uzunluk * uzunluk;
    printf("karenin alani: %.2f", cevap);
    }
    else if( x == 'd'|| x == 'D')
    {
    printf("dairenin yaricapini giriniz:");
        scanf("%d", &yaricap);
        cevap = yaricap * yaricap * pi;
    printf("dairenin alani: %.2f", cevap);
    }
    else 
    {
        printf("hatali giris yaptiniz");
    }




    return 0;
}