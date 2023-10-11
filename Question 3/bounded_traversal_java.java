import java.util.ArrayList;
import java.util.List;

public class BoundedMatrixTraversal {
    public static List<Integer> boundedMatrixTraversal(int[][] matrix, int top, int bottom, int left, int right) {
        List<Integer> result = new ArrayList<>();

        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for (int col = left; col <= right; col++) {
                result.add(matrix[top][col]);
            }
            top++;

            // Traverse from top to bottom along the rightmost column
            for (int row = top; row <= bottom; row++) {
                result.add(matrix[row][right]);
            }
            right--;

            // Check if there are more rows to traverse
            if (top <= bottom) {
                // Traverse from right to left along the bottom row
                for (int col = right; col >= left; col--) {
                    result.add(matrix[bottom][col]);
                }
                bottom--;
            }

            // Check if there are more columns to traverse
            if (left <= right) {
                // Traverse from bottom to top along the leftmost column
                for (int row = bottom; row >= top; row--) {
                    result.add(matrix[row][left]);
                }
                left++;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int top = 0;
        int bottom = matrix.length - 1;
        int left = 0;
        int right = matrix[0].length - 1;

        List<Integer> traversalResult = boundedMatrixTraversal(matrix, top, bottom, left, right);

        for (Integer element : traversalResult) {
            System.out.print(element + " ");
        }
    }
}
