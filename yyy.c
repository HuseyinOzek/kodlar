#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\husey\\Desktop\\test.txt", "r");
    char buffer[255];
    
    
    fgets(buffer, 255, pF);    
    printf("%s", buffer);
    
    fclose(pF);

    return 0;
}