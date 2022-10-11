// COMP1511 22T3 - 2D Arrays
// A simple tic-tac-toe game
//
// Ada Luong, October 2022

#include <stdio.h>

#define SIZE 5
#define WIN 1
#define NO_WIN 0

int did_player_win(char player_symbol, char board[SIZE][SIZE]);
int check_row(char player_symbol, char board[SIZE][SIZE]);
int check_col(char player_symbol, char board[SIZE][SIZE]);
int check_diagonal(char player_symbol, char board[SIZE][SIZE]);

int main(void) {
    /*
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    */
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// checks if a player won a given board state
int did_player_win(char player_symbol, char board[SIZE][SIZE]) {
    int player_won = NO_WIN;
    if (check_row(player_symbol, board) == WIN) {
        player_won = WIN;
    } else if (check_col(player_symbol, board) == WIN) {
        player_won = WIN;
    } else if (check_diagonal(player_symbol, board) == WIN) {
        player_won = WIN;
    }
    return player_won;
}

// checks if a player has completed any full row on the board
int check_row(char player_symbol, char board[SIZE][SIZE]) {

    // checks if all five elements are the same character
    // by keeping track of the number of player_symbols on the board
    // and comparing it with the board size
    for (int row = 0; row < SIZE; row++) {

        int player_symbol_count = 0;
        for (int col = 0; col < SIZE; col++) {
            // see if the symbol matches the expected symbol
            if (board[row][col] == player_symbol) {
                player_symbol_count++;
            } 
        }
    
        // after looping through an entire row
        // see if the number of symbols on the board is equal to the board size
        // i.e. there is a complete row
        if (player_symbol_count == SIZE) {
            return WIN;
        } 
    }
    
    // after looping through each row on the board
    return NO_WIN;    
}

// checks if a player has completed any full column on the board
int check_col(char player_symbol, char board[SIZE][SIZE]) {
    // TO-DO
    return 0;
}

// checks if a player has completed any diagonal on the board
int check_diagonal(char player_symbol, char board[SIZE][SIZE]) {
    // TO-DO
    return 0;
}