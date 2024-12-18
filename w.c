#include <stdio.h>

int main()
{
    int rows;
    int columns;
    int symbol;
 
    printf(" Enter # of rows: ");
    scanf("%d", &rows);

    printf(" Enter # of columns: ");
    scanf("%d", &columns);

    getchar();

    printf(" Enter a symbol to use: ");
    scanf("%c", &symbol);
    
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}