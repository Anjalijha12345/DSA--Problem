public class kadaneAlgo {

    // Function to find the maximum subarray sum using Kadane's Algorithm
    public static int kadaneAlgorithm(int[] arr) {
        int maxSum = arr[0]; // Initialize a variable to store the maximum subarray sum
        int currentSum = 0;

        for (int i = 0; i < arr.length; i++) {
            currentSum += arr[i]; // Add the current element to the current subarray sum
            maxSum = Math.max(maxSum, currentSum); // Update the maximum subarray sum if the current sum is greater

            if (currentSum < 0) {
                currentSum = 0; // If the current subarray sum becomes negative, reset it to 0
            }
        }

        return maxSum;
    }

    public static void main(String[] args) {
        int[] arr = {-2, 1, -3, 4, -1, 2, 1, 5, 4};
        int maxSum = kadaneAlgorithm(arr); // Call the Kadane's Algorithm function
        System.out.println("Maximum subarray sum: " + maxSum);
    }
}
