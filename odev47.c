#include <stdio.h>

int main() {

    int a, b, c;
    int ortanca;
 
    while (1) {
        printf("3 farkli sayi giriniz: ");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a != b && a != c && b != c) { // sartin gerceklesip gerceklesmediginin kontrolu
            break; 
        }
        printf("\n Lutfen rakamlari birbirinden farkli girin: ");
    }

    if ((a > b && a < c) || (a < b && a > c)) {         // ortanca sayiyi bulma islemi
        ortanca = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        ortanca = b;
    } else {
        ortanca = c;
    }

    printf("ortanca sayi: %d\n", ortanca);

    return 0;
}
