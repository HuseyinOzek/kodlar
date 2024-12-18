#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello   ! , World";
    char str2[] = "!,";
    
    size_t index = strcspn(str1, str2);
    
    printf("'%s' dizisinde ilk bulunan karakterin indeksi: %zu\n", str2, index);
    return 0;
}
