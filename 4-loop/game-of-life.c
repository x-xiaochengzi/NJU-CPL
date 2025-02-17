//
// Created by xzc on 2025/2/16.
//
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define SIZE 6
const int board[SIZE][SIZE] = {
    {0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0},
    {0}
};
int main(void) {
    // expand the old board
    int old_board[SIZE + 2][SIZE + 2] = {0};
    for (int i = 1; i <= SIZE; ++i) {
        for (int j = 1; j <= SIZE; ++j) {
            old_board[i][j] = board[i - 1][j - 1];
        }
    }

    // print the old board
    for (int i = 1; i <= SIZE; ++i) {
        for (int j = 1; j <= SIZE; ++j) {
            printf("%c ", old_board[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
    // count the live neighbors for each cell
    int new_board[SIZE + 2][SIZE + 2] = {0};
    for (int k = 0; k < 10; ++k) {
        for (int i = 1; i <= SIZE; ++i) {
            for (int j = 1; j <= SIZE; ++j) {
                int num_of_live_neighbors =
                    old_board[i - 1][j - 1] + old_board[i - 1][j] + old_board[i - 1][j + 1]+
                    old_board[i][j - 1] +  old_board[i][j + 1] +
                    old_board[i + 1][j - 1] + old_board[i + 1][j] + old_board[i + 1][j + 1];
                if (old_board[i][j] == 1) {
                    new_board[i][j] = (num_of_live_neighbors == 2 ||
                        num_of_live_neighbors == 3);
                } else {
                    new_board[i][j] = (num_of_live_neighbors == 3);
                }
            }
        }
        system("cls");
        Sleep(1000);
        // print the new board
        for (int i = 1; i <= SIZE; ++i) {
            for (int j = 1; j <= SIZE; ++j) {
                printf("%c ", new_board[i][j] ? '*' : ' ');
            }
            printf("\n");
        }

        // copy
        for (int i = 1; i <= SIZE; ++i) {
            for (int j = 1; j <= SIZE; ++j) {
                old_board[i][j] = new_board[i][j];
            }
        }
    }
    return 0;
}