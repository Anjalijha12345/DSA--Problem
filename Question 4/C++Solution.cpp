// This code defines a function maxSubArray that implements Kadane's algorithm to find the maximum sum subarray.
//  In the main function, it demonstrates how to use the function with the provided examples.

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(std::vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
     vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
     cout << "Example 1: " << maxSubArray(nums1) <<  endl;

     vector<int> nums2 = {1};
     cout << "Example 2: " << maxSubArray(nums2) <<  endl;

     vector<int> nums3 = {5, 4, -1, 7, 8};
     cout << "Example 3: " << maxSubArray(nums3) <<  endl;

    return 0;
}
