import java.util.*;
class Main {
    public static void maxSubArray() {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter length of array:");
        int n = in.nextInt();
        System.out.println("Enter values of array:");
        int nums[] = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }

        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        
        for (int i = 0; i < nums.length; i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        System.out.println("The maximum sum is: "+maxSum);
        in.close();
    }
}