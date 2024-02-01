#include <stdio.h>
#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int amount = 0, count, i, j;
    scanf("%d", &amount);
    count = amount;
    int table[BOARD_SIZE][BOARD_SIZE];
    char p[3];

    for (i = 0; i < BOARD_SIZE; i++){
        for (j = 0; j < BOARD_SIZE; j++){
            table[i][j] = ' ';
            // table[i][j] = '|';
        }
    }

    while (count){
        count -= 1;
        char p;
        int x = 0, y = 0;
        scanf(" %c(%d, %d)", &p, &x, &y);

        setPieceOnTable(table, p, x, y);
        
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (j = 0; j < BOARD_SIZE; j++){
            printf("%c|", table[i][j]);
        }
        printf("\n");
    }
    
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){
    board[yPos][xPos] = piece;
}