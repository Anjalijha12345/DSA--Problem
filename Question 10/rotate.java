class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int j= 0;
        while(j<n){
            reverse(matrix, 0, j, n-1, j);
            j++;
        }
        int i1 = 0;
        int j1 = 0;
        int i2 = 0;
        int j2 = 0;
        while(i1<n){
            daignol(matrix, i1, i2, j1, j2);
            i1++;
            j2++;
        }
        j2--;
        i1--;
        while(i2<n){
            i2++;
            j1++;
            if(i2>=n){
                break;
            }
            daignol(matrix, i1, i2, j1, j2);
        }
       
    }
    public void daignol(int[][] matrix, int i1, int j1, int i2, int j2){
        while(i2<i1){
            swap(matrix, i1, i2,j1,j2);
            i1--;
            j1++;
            i2++;
            j2--;
        }
    }
    public void reverse(int[][] matrix, int i1, int j1, int i2, int j2){
        while(i1<i2){
            swap(matrix, i1, i2,j1,j2);
            i1++;
            i2--;
        }
    }
    public void swap(int[][] matrix, int i1, int i2, int j1, int j2){
        int temp = matrix[i1][j1];
        matrix[i1][j1] = matrix[i2][j2];
        matrix[i2][j2] = temp;
    }
}
