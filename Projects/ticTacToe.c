/*
Creating a Tic Tac Toe game in C is a great way to practice handling arrays, functions,
and control structures. Let's build a simple console-based Tic Tac Toe game.

Step-by-Step Implementation
Define the Game Board:

We'll use a 3x3 character array to represent the board.

Function Prototypes:

Initialize the board

Display the board

Make a move

Check for a win or a draw
*/
#include <stdio.h>

#define SIZE 3

// Function prototypes
void initializeBoard(char board[SIZE][SIZE]);
void displayBoard(char board[SIZE][SIZE]);
int makeMove(char board[SIZE][SIZE], int row, int col, char player);
int checkWin(char board[SIZE][SIZE]);
int checkDraw(char board[SIZE][SIZE]);

int main() {
    char board[SIZE][SIZE];
    int row, col;
    char currentPlayer = 'X';
    int gameStatus = 0; // 0 = ongoing, 1 = win, 2 = draw

    initializeBoard(board);

    while (gameStatus == 0) {
        displayBoard(board);
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (makeMove(board, row, col, currentPlayer)) {
            if (checkWin(board)) {
                gameStatus = 1;
            } else if (checkDraw(board)) {
                gameStatus = 2;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            printf("Invalid move, try again.\n");
        }
    }

    displayBoard(board);
    if (gameStatus == 1) {
        printf("Player %c wins!\n", currentPlayer);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

// Initialize the board with empty spaces
void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

// Display the board
void displayBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

// Make a move on the board
int makeMove(char board[SIZE][SIZE], int row, int col, char player) {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
        board[row][col] = player;
        return 1;
    }
    return 0;
}

// Check for a win
int checkWin(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        // Check rows and columns
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

// Check for a draw
int checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}