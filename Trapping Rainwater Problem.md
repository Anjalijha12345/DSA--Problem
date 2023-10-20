## QUESTION : Trapping Rainwater
### Link: https://leetcode.com/problems/trapping-rain-water/description/
```
Given an array arr[] of non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.

Input: arr[] = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6

Explanation:
The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
In this case, 6 units of rain water (blue section) are being trapped.
Constraints :
1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
```
### SOLUTION
>**Time Complexity : O(N)** <br>
>**Space Complexity : O(N)**

```
#include <bits/stdc++.h>
using namespace std;
 
int Rainwater_Trapped(int arr[], int n)
{
    int left[n], right[n];
    int water = 0;
 
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);  //fill left array with PREFIX MAX values
         
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);  //fill right array with SUFFIX MAX values
    
    //Amount of water trapped at i'th block is equal to min(left[i], right[i]) - arr[i]
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - arr[i];
 
    return water;
}
 
int main()
{
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum Amount of Rainwater Trapped is "<< Rainwater_Trapped(arr, n);
    
    return 0;
}
```
