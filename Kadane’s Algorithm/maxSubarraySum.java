import java.util.*;

public class maxSubarraySum {
    // Function to find the maximum subarray sum
    public static long maxSubarraySum(int[] arr, int n) {
        long maxSum = Long.MIN_VALUE; // Initialize maximum sum as Long.MIN_VALUE (negative infinity)
        long currentSum = 0; // Initialize current sum as zero

        // Traverse through the array
        //where n is the Size of thhe array
        for (int i = 0; i < n; i++) {

            currentSum += arr[i]; // Add the current element to the current sum

            if (currentSum > maxSum) {
                maxSum = currentSum; // If the current sum is greater than the maximum sum, update the maximum sum
            }

            // If the current sum becomes negative, reset it to zero
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        // Uncomment the following check if you want to consider the sum of an empty subarray as zero
        //if (maxi < 0) maxi = 0;

        return maxSum; // Return the maximum subarray sum
    }

    public static void main(String args[]) {
        int[] arr = {-2,-3,4,-1,-2,1,5,-3};
        int n = arr.length;
        long maxSum = maxSubarraySum(arr, n);
        System.out.println("The maximum subarray sum is: " + maxSum);
    }
}
