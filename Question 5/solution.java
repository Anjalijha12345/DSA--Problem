import java.util.Arrays;

public class RotateArray {
    public static void rotate(int[] nums, int k) {
        int n = nums.length;
        k %= n;  // Adjust k to be within the array size

        // Reverse the entire array
        reverse(nums, 0, n - 1);

        // Reverse the first k elements
        reverse(nums, 0, k - 1);

        // Reverse the remaining elements
        reverse(nums, k, n - 1);
    }

    public static void reverse(int[] nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    public static void display(int[] nums) {
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 4, 5, 6, 7};
        int k1 = 3;
        System.out.print("Example 1: Original array: ");
        display(nums1);
        rotate(nums1, k1);
        System.out.print("Rotated by " + k1 + " steps: ");
        display(nums1);

        int[] nums2 = {-1, -100, 3, 99};
        int k2 = 2;
        System.out.print("Example 2: Original array: ");
        display(nums2);
        rotate(nums2, k2);
        System.out.print("Rotated by " + k2 + " steps: ");
        display(nums2);
    }
}
