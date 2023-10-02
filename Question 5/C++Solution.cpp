// The rotate function uses reversal to rotate the array to the right by k steps. The display function is a utility function to display 
// the elements of the array. In the main function, it demonstrates how to use the rotate function with the provided examples.


#include <iostream>
#include <vector>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;  // Adjust k to be within the array size

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

void display(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    std::cout << "Example 1: Original array: ";
    display(nums1);
    rotate(nums1, k1);
    std::cout << "Rotated by " << k1 << " steps: ";
    display(nums1);

    std::vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    std::cout << "Example 2: Original array: ";
    display(nums2);
    rotate(nums2, k2);
    std::cout << "Rotated by " << k2 << " steps: ";
    display(nums2);

    return 0;
}
