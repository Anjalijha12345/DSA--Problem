#include <iostream>
#include <climits>
using namespace std;

// Function to find the maximum subarray sum
long long maxSubarraySum(int arr[], int n)
{
    long long maxi = LONG_MIN; // Initialize maximum sum as negative infinity
    long long sum = 0;         // Initialize current sum as zero

    // Traverse through the array
    for (int i = 0; i < n; i++)
    {

        sum += arr[i]; // Add the current element to the current sum

        if (sum > maxi)
        {
            maxi = sum; // If the current sum is greater than the maximum sum, update the maximum sum
        }

        // If the current sum becomes negative, reset it to zero
        if (sum < 0)
        {
            sum = 0;
        }
    }

    // Uncomment the following check if you want to consider the sum of an empty subarray as zero
    // if (maxi < 0) maxi = 0;

    return maxi; // Return the maximum subarray sum
}

int main()
{
    // int arr[] = {1,2,3,-2,5};
    int arr[] = {-1, -2, -3, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
