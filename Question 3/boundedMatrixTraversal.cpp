#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> BoundaryTraversal(vector<vector<int>>& matrix, int n, int m) {
        vector<int> ans;
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                ans.push_back(matrix[0][i]);
            }
            return ans;
        }
        if (m == 1) {
            for (int i = 0; i < n; i++) {
                ans.push_back(matrix[i][0]);
            }
            return ans;
        }
        for (int i = 0; i < m; i++) {
            ans.push_back(matrix[0][i]);
        }
        for (int i = 1; i < n; i++) {
            ans.push_back(matrix[i][m - 1]);
        }
        for (int i = m - 2; i >= 0; i--) {
            ans.push_back(matrix[n - 1][i]);
        }
        for (int i = n - 2; i >= 1; i--) {
            ans.push_back(matrix[i][0]);
        }
        return ans;
    }
};

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<int> result = obj.BoundaryTraversal(matrix, n, m);

    cout << "Boundary Traversal in clockwise order:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
