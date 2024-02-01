#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int table[][BOARD_SIZE], int xPos, int yPos){
    int mark = 1;

    table[yPos][xPos] = 'B';

    for (int i = yPos - 1; i >= 0; i--){
        if (xPos - mark >= 0){
            table[i][xPos - mark] = 'X';
        }if (xPos + mark <= 7){
            table[i][xPos + mark] = 'X';
        }
        mark += 1;
    }

    mark = 1;
    for (int i = yPos + 1; i <= 7; i++){
        if (xPos - mark >= 0){
            table[i][xPos - mark] = 'X';
        }if (xPos + mark <= 7){
            table[i][xPos + mark] = 'X';
        }
        mark += 1;
    }
}

int main(){
    int board[BOARD_SIZE][BOARD_SIZE], x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");

    //make board
    for (int i = 0; i < BOARD_SIZE; i++){
        for (int j = 0; j < BOARD_SIZE; j++){
            board[i][j] = ' ';
        }
    }

    //make bishopMove
    bishopMoves(board, x, y);

    //show board
    for (int i = 0; i < BOARD_SIZE; i++){
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++){
            printf("%c|", board[i][j]);
        }
        printf("\n");
        printf("------------------\n");
    }
}