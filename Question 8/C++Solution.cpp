// The searchMatrix function performs a binary search on the matrix treating it as a 1D array. In the main function, it 
// demonstrates how to use the searchMatrix function with the provided examples.


#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = matrix[mid / n][mid % n];

        if (midElement == target) {
            return true;
        } else if (midElement < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix1 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target1 = 3;
    cout << "Example 1: Target " << target1 << " found? " << boolalpha << searchMatrix(matrix1, target1) << endl;

    vector<vector<int>> matrix2 = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target2 = 13;
    cout << "Example 2: Target " << target2 << " found? " << boolalpha << searchMatrix(matrix2, target2) << endl;

    return 0;
}
