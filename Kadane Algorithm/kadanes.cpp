#include<iostream>
#include<vector> 
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
int kadaneAlgorithm(vector<int> arr, int n){
    long maxi = arr[0]; // Initialize a variable to store the maximum subarray sum
    long sum = 0;       
    
    for(int i = 0; i < n; i++){
        sum = sum + arr[i]; 
        maxi = max(maxi, sum); // Update the maximum subarray sum if the current sum is greater
        
        if(sum < 0){
            sum = 0; // If the current subarray sum becomes negative, reset it to 0
        }
    }
    
    return maxi; 
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, 5, 4};
    int n = arr.size(); 
    int maxSum = kadaneAlgorithm(arr, n); // Call the Kadane's Algorithm function
    cout << "Maximum subarray sum: " << maxSum << endl; 
    return 0;
}
