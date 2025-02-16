#include <iostream>
#include <vector>

using namespace std;

const int N = 9;

// Function to print the Sudoku board
void printBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if it's safe to place a number
bool isSafe(const vector<vector<int>>& board, int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num ||
            board[row - row % 3 + x / 3][col - col % 3 + x % 3] == num) {
            return false;
        }
    }
    return true;
}

// Function to solve the Sudoku using backtracking
bool solveSudoku(vector<vector<int>>& board, int row, int col) {
    if (row == N - 1 && col == N) {
        return true;
    }
    if (col == N) {
        row++;
        col = 0;
    }
    if (board[row][col] != 0) {
        return solveSudoku(board, row, col + 1);
    }
    for (int num = 1; num <= N; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;
            if (solveSudoku(board, row, col + 1)) {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board, 0, 0)) {
        printBoard(board);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
