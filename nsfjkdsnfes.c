#include <stdio.h>

int main(){
    int num, i, asal;

    printf("asal sayilar: ");

    for(num = 2; num <= 20; num++) {
        asal = 1;

        for(i = 2; i <= num / 2; i++){
             if(num % i == 0){
              asal = 0;
              break;
          }
        }
     if(asal == 1){
        printf("%d ", num);
     }
    }
    return 0;
}