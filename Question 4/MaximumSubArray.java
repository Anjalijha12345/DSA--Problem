import java.util.*;

public class MaximumSubArray {
    public static void main(String[] args) {
        int[] arr = {-2,-3,4,-1,-2,1,5,-3};
        int n = arr.length;
        //Assign masSum to maxSubArray1 if you want to follow brute - force approach
        //int maxSum = maxSubArray1(arr, n);

        //Assign masSum to maxSubArray1 if you want to follow prefixArray Approach to find Maximum SubArray Sum.
        // int maxSum = maxSubArraySum2(arr);

        //If you want to use Kadane's Algorith assign maxSum to kadane
        int maxSum = kadane(arr);
        System.out.println("The maximum subarray sum is: " + maxSum);

    }
    // Using O(n^3) Time Complexity
    public static int maxSubArray1(int[] arr, int n){
        int currentSum = 0;
        int maxSum = Integer.MIN_VALUE;
        
        for(int i= 0;i<n;i++){
            for(int j = i; j<n;j++){
                currentSum = 0;
                for(int k = i;k<=j;k++){
                    currentSum += arr[k];
                }
                
                if(maxSum<currentSum){
                    maxSum = currentSum;
                }
            }
        }
        return maxSum;
    }
    //To improve complexity, we use prefixSum Array
    //Time complexity of prefixSum Array is -> O(n^2)

    public static int maxSubArraySum2(int[] arr){
        int currentSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int n = arr.length;
        int[] prefix = new int[n];
        prefix[0] = arr[0];
        
        for(int i= 1;i<prefix.length;i++){
            prefix[i] = prefix[i-1]+arr[i];
        }
        for(int i = 1;i<n;i++){
            for(int j = i; j<n;j++){
                if(i==0){
                    currentSum = prefix[i];
                }
                currentSum = prefix[j]-prefix[i-1];
                if(maxSum<currentSum){
                    maxSum = currentSum;
                }
            }
        }
        return maxSum;
    }

    //Using Kadane's Algorithm, Time complexity is reduced to -> O(n)
    public static int Kadane(int[] arr){
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        for(int i = 0;i<arr.length;i++){
            currentSum+=arr[i];
            if(currentSum<0){
                currentSum = 0;
            }
            maxSum = Math.max(currentSum, maxSum);
        }
        return maxSum;
    }
}
