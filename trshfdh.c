#include <stdio.h>

int main() {
    double num1, num2;
    char operation;

    // Kullanıcıdan iki sayı ve işlem girmesini iste
    printf("İlk sayıyı girin: ");
    scanf("%lf", &num1);
    printf("İkinci sayıyı girin: ");
    scanf("%lf", &num2);
    printf("Bir işlem seçin (+, -, *, /): ");
    scanf(" %c", &operation);

    // İşlem seçimini switch-case ile kontrol et
    switch (operation) {
        case '+':
            printf("Sonuç: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Sonuç: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Sonuç: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Sonuç: %.2lf\n", num1 / num2);
            else
                printf("Hata: Sıfıra bölme yapılamaz!\n");
            break;
        default:
            printf("Geçersiz işlem!\n");
    }

    return 0;
}
