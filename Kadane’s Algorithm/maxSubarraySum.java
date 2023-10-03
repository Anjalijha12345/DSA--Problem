import java.util.*;

public class maxSubarraySum {
    // Function to find the maximum subarray sum
    public static long maxSubarraySum(int[] arr, int n) {
        long maxi = Long.MIN_VALUE; // Initialize maximum sum as Long.MIN_VALUE (negative infinity)
        long sum = 0; // Initialize current sum as zero

        // Traverse through the array
        for (int i = 0; i < n; i++) {

            sum += arr[i]; // Add the current element to the current sum

            if (sum > maxi) {
                maxi = sum; // If the current sum is greater than the maximum sum, update the maximum sum
            }

            // If the current sum becomes negative, reset it to zero
            if (sum < 0) {
                sum = 0;
            }
        }

        // Uncomment the following check if you want to consider the sum of an empty subarray as zero
        //if (maxi < 0) maxi = 0;

        return maxi; // Return the maximum subarray sum
    }

    public static void main(String args[]) {
        int[] arr = {-1,-2,-3,-4};
        int n = arr.length;
        long maxSum = maxSubarraySum(arr, n);
        System.out.println("The maximum subarray sum is: " + maxSum);
    }
}
