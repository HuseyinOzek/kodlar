#include <stdio.h>

int a=10;
int *p = &a;

void degerarttir(int *p){
    *p = *p + 1;
}


int main(){

    degerarttir(&a);
    printf("%d \n", *p);
    printf("%d", p);




    return 0;
}