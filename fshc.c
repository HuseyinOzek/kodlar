
#include <stdio.h>

int main() {
    int i = 5;
    int result = i++ * i-- + --i * ++i;
    printf("%d\n", result);
    return 0;
}