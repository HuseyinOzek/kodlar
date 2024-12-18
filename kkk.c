#include <stdio.h>

int main()
{
   int sinav1;
   int sinav2;
   int sinav3;
   double ortalama;

   printf("Ara sinav puanini giriniz:");
   scanf("%d", &sinav1);

   printf("\n Son sinav puanini giriniz:");
   scanf("%d", &sinav2);

   printf("\n Devam puanini giriniz:");
   scanf("%d", &sinav3);
   
   
   ortalama = (sinav1 * 0.40) + (sinav2 * 0.50) + (sinav3 * 0.10);
   
   
   if (ortalama > 60) 
    {     
        printf("%.2f", ortalama);     
        printf("\nTebrikler, gectiniz.\n");    
    } 
    else 
    {     
        printf("Ortalamaniz %.2f. Geçemediniz.\n", ortalama);
    } 
    
    return 0;
}