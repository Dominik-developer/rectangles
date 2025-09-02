#include <stdio.h>

int main() {

    //rectangle drawing algorithm

    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++) {
        for(int i = 0; i < columns; i++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}