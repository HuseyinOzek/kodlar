#include <stdio.h>

int main(){

    int a[5][20];
    int i;

    printf("\n\n");
    for(i=0 ; i<5 ; i++){
        printf("%d. adi giriniz", i+1);
        scanf("%s", a[i]);
    }
    
    for(i=4; i>=0 ; i--){
        scanf("%s\n", a[i]);
    }





    return 0;
}