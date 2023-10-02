// To use this code, provide the input as described in the problem statement. The code will output the 
// number of ways you can place the queens satisfying the conditions.

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(const vector<string>& board, int row, int col) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; ++i)
        if (board[i][col] == 'Q')
            return false;

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (board[i][j] == 'Q')
            return false;

    // Check upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < board.size(); --i, ++j)
        if (board[i][j] == 'Q')
            return false;

    return true;
}

void solveNQueensUtil(const vector<string>& board, int row, int& count) {
    if (row == board.size()) {
        // All queens are placed, increment the count
        ++count;
        return;
    }

    for (int col = 0; col < board.size(); ++col) {
        if (board[row][col] == '.' && isSafe(board, row, col)) {
            // Place the queen
            vector<string> newBoard = board;
            newBoard[row][col] = 'Q';

            // Try placing the next queen in the next row
            solveNQueensUtil(newBoard, row + 1, count);
        }
    }
}

int solveNQueens(const vector<string>& board) {
    int count = 0;
    solveNQueensUtil(board, 0, count);
    return count;
}

int main() {
    vector<string> board(8);

    // Input
    for (int i = 0; i < 8; ++i)
        cin >> board[i];

    int count = solveNQueens(board);
    cout << count << endl;

    return 0;
}
