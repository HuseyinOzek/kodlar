#include <stdio.h>

int main()
{
    int count = 0;
    double sayi, sum = 0.0;

    printf("notlari giriniz (girdiyi bitirmek icin -1 giriniz): ");

    while(1){
        scanf("%lf", &sayi);

        if(sayi ==  -1){
            break;
        }

        sum += sayi;
        count ++;
    }

    if (count == 0){
        printf("sayi girmediniz");
    }
    else{
        printf("ortalama: %.2lf \n", sum / count);
    }
    return 0;
}