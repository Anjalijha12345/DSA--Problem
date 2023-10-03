import sys

# Function to find the maximum subarray sum
def maxSubarraySum(arr, n):
    maxi = -sys.maxsize - 1 # Initialize maximum sum as the smallest possible value
    sum = 0 # Initialize current sum as zero

    # Traverse through the array
    for i in range(n):
        sum += arr[i] # Add the current element to the current sum

        if sum > maxi:
            maxi = sum # If the current sum is greater than the maximum sum, update the maximum sum

        # If the current sum becomes negative, reset it to zero
        if sum < 0:
            sum = 0


    return maxi # Return the maximum subarray sum

arr = [-1,-2,-3,-4]
n = len(arr)
maxSum = maxSubarraySum(arr, n)
print("The maximum subarray sum is:", maxSum)
