#include <stdio.h>

char board[3][3]; // Our 3x3 grid
char player = 'X';

void resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("\n   0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  %c | %c | %c \n", i, board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("  ---|---|---\n");
    }
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') return 1;
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') return 1;
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') return 1;
    
    return 0;
}

int main() {
    int row, col, moves = 0;
    resetBoard();

    while (moves < 9) {
        printBoard();
        printf("\nPlayer %c, enter row and column (0-2) separated by space: ", player);
        
        // Basic input validation to prevent crashes if user enters non-integers
        if (scanf("%d %d", &row, &col) != 2) {
            printf("Invalid input! Please enter two numbers.\n");
            while(getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player;
            moves++;
            
            if (checkWin()) {
                printBoard();
                printf("\nPlayer %c WINS!\n", player);
                return 0;
            }
            
            // Switch players
            player = (player == 'X') ? 'O' : 'X'; 
        } else {
            printf("\nInvalid move or spot taken! Try again.\n");
        }
    }

    printBoard();
    printf("\nIt's a DRAW!\n");
    return 0;
}
