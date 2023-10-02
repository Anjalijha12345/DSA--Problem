import java.util.ArrayList;

public class BoundedMatrixTraversal {
    static ArrayList<Integer> boundaryTraversal(int matrix[][], int n, int m)
    {
        ArrayList<Integer> res = new ArrayList<Integer>();
        if (n == 1){            // if single row matrix
            for (int j = 0; j < m; j++)
                res.add(matrix[0][j]);
        }
        else if(m == 1){        // if single column matrix
            for (int i = 0; i < n; i++)
                res.add(matrix[i][0]);
        }
        else{
            for (int j = 0; j < m; j++) {     // Traverse top row
                res.add(matrix[0][j]);
            }
            for (int i = 1; i < n; i++) {     // Traverse last column
                res.add(matrix[i][m - 1]);
            }
            // Traverse last row (if there's more than 1 row)
            if (n > 1) {
                for (int j = m - 2; j >= 0; j--)
                    res.add(matrix[n - 1][j]);
            }
            // Traverse 1st column (if there's more than 1 column)
            if (m > 1) {
                for (int i = n - 2; i >= 1; i--)
                    res.add(matrix[i][0]);
            }
        }
        return res;
    }
}
