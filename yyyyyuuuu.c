#include <stdio.h>

int main()
{
    float anneboy;
    float bababoy;
    float hedefboy;
    char k;
    char K;
    char E;
    char e;
    char x;


    printf("Babanin boyunu cmcinsinden giriniz:");
    scanf("%f", &bababoy);

    printf("\n Annenin boyunu cm cinsinden giriniz:");
    scanf("%f", &anneboy);

    printf("\n cinsiyet giriniz:");
    scanf("%s", &x);

    if (x == 'E' || x == 'e')
    {
        hedefboy = (bababoy + anneboy + 13)/2 ;
        printf("Erkegin tahmini boyu: %.2lf", hedefboy);
        if ( hedefboy < 174)
        {
            printf("\n turkiye ortalamasindan kisa");
        }
        else 
        {
            printf("\n turkiye ortalamasindan uzun");
        }
    }
    else if(x == 'k' || x == 'K')
    {
        hedefboy = (bababoy + anneboy - 13)/2 ;
        printf("Kizin tahmini boyu: %.2lf", hedefboy);
        if ( hedefboy < 174)
        {
            printf("\n turkiye ortalamasindan kisa");
        }
        else 
        {
            printf("\n turkiye ortalamasindan uzun");
        }
    }
    else 
    {
        printf("Hatali giris yaptiniz.");

    }




    return 0;
}