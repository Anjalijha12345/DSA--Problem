function maxSubarraySum(arr, n) {
  let maxi = Number.MIN_SAFE_INTEGER; // Initialize maximum sum as the smallest possible safe integer
  let sum = 0; // Initialize current sum as zero

  // Traverse through the array
  for (let i = 0; i < n; i++) {
    sum += arr[i]; // Add the current element to the current sum

    if (sum > maxi) {
      maxi = sum; // If the current sum is greater than the maximum sum, update the maximum sum
    }
    // If the current sum becomes negative, reset it to zero
    if (sum < 0) {
      sum = 0;
    }
  }

  return maxi; // Return the maximum subarray sum
}

const arr = [-1, -2, -3, -4];
const n = arr.length;
const maxSum = maxSubarraySum(arr, n);
console.log("The maximum subarray sum is: " + maxSum);
