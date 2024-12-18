#include <stdio.h>

int main()
{ 
    double ilkdeger;
    double ikincideger;
    double sonuc;
    double tutar;
    double tutar2;

    printf("\n ilk endeksi giriniz:");
    scanf("%lf", &ilkdeger);

    printf("\n ikinci endeksi giriniz:");
    scanf("%lf", &ikincideger);

    sonuc = ikincideger - ilkdeger;
    tutar = (sonuc * 0.159838);
    tutar2 = (sonuc * 0.159838) + ((tutar * 22) /100);


    printf("%.2lf", tutar2);
    


  
  
  
  
  
    return 0;
}