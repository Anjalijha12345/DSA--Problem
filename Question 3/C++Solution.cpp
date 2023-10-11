// This C++ code defines a function boundaryTraversal that traverses each edge of the matrix separately and returns the boundary
//  elements in clockwise order. In the main function, it demonstrates how to use the boundaryTraversal function for the provided examples.


#include <iostream>
#include <vector>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>>& matrix, int n, int m) {
    vector<int> result;

    if (n == 1) {
        result.insert(result.end(), matrix[0].begin(), matrix[0].end());
    } else if (m == 1) {
        for (int i = 0; i < n; ++i)
            result.push_back(matrix[i][0]);
    } else {
        for (int i = 0; i < m; ++i)
            result.push_back(matrix[0][i]);

        for (int i = 1; i < n; ++i)
            result.push_back(matrix[i][m - 1]);

        for (int i = m - 2; i >= 0; --i)
            result.push_back(matrix[n - 1][i]);

        for (int i = n - 2; i > 0; --i)
            result.push_back(matrix[i][0]);
    }

    return result;
}

int main() {
    vector<vector<int>> matrix1 = {{1, 2, 3, 4},
                                               {5, 6, 7, 8},
                                               {9, 10, 11, 12},
                                               {13, 14, 15, 16}};
    int n1 = 4, m1 = 4;

    vector<int> result1 = boundaryTraversal(matrix1, n1, m1);
    for (int elem : result1)
        cout << elem << " ";
    cout << endl;

    vector<vector<int>> matrix2 = {{12, 11, 10, 9},
                                               {8, 7, 6, 5},
                                               {4, 3, 2, 1}};
    int n2 = 3, m2 = 4;

    vector<int> result2 = boundaryTraversal(matrix2, n2, m2);
    for (int elem : result2)
        cout << elem << " ";
    cout << endl;

    return 0;
}
