#include <iostream>
#include <vector>

using namespace std;

const int N = 8;  // Size of the chessboard

bool isSafe(vector<vector<char>>& board, int row, int col) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') {
            return false;
        }
    }

    // Check if there is a queen in the left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check if there is a queen in the right diagonal
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

int solveNQueens(vector<vector<char>>& board, int row) {
    if (row == N) {
        return 1;
    }

    int count = 0;
    for (int col = 0; col < N; col++) {
        if (board[row][col] == '.' && isSafe(board, row, col)) {
            board[row][col] = 'Q';  // Place the queen
            count += solveNQueens(board, row + 1);
            board[row][col] = '.';  // Backtrack
        }
    }

    return count;
}
int main() {
    vector<vector<char>> a = {{'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '*', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '*', '*', '.'},
                              {'.', '.', '.', '*', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.', '.', '.'}};
    cout << solveNQueens(a, 0);
}