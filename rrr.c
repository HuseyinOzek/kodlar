#include <stdio.h>  

int main()    
{
    
    FILE *pF = fopen("C:\\Users\\husey\\Desktop\\ test.txt", "a");

    fprintf(pF, "aaaa");
    fclose(pF);
    
    /*
    if(remove("test.txt") == 0)
    {
        printf("silindi");
    }
    else
    {
        printf("silinemedi");
    }
*/
    return 0;
}