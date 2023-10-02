def kadane_algorithm(arr):
    max_sum = arr[0] # Initialize a variable to store the maximum subarray sum
    current_sum = 0
    
    for num in arr:
        current_sum += num # Add the current element to the current subarray sum
        max_sum = max(max_sum, current_sum) # Update the maximum subarray sum if the current sum is greater
        
        if current_sum < 0:
            current_sum = 0 # If the current subarray sum becomes negative, reset it to 0
    
    return max_sum

if __name__ == "__main__":
    arr = [-2, 1, -3, 4, -1, 2, 1, 5, 4]
    max_sum = kadane_algorithm(arr) # Call the Kadane's Algorithm function
    print("Maximum subarray sum:", max_sum)
