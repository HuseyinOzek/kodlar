#include <stdio.h>

int main()
{
    float tutar;
    float kdv;
    float bedel;
    float hak;

    printf("odenecek tutari giriniz :");
    scanf("%f", &tutar);

    kdv = tutar * 0.15;
    bedel = tutar - kdv;
    hak = bedel / 0.3047;

    printf("odenecek toplam tutar:     %f", tutar);
    printf("\n hesaplanan kdv:           %f", kdv);
    printf("\n gaz bedeli:               %f", bedel);
    printf("\n hak edilen gaz:           %f M3", hak);

    return 0;
}