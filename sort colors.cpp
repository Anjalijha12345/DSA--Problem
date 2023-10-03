
// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]



class Solution {
public:
    void sortColors(vector<int>& nums) {
      int i;
      int temp;
      int k=0;
      vector<int> t=nums;
      for(i=0;i<nums.size();i++)
      {
          if(nums[i]==0)
          {
              t[k]=0;
              k++;
          }
      }
      for(i=0;i<nums.size();i++)
      {
          if(nums[i]==1)
          {
              t[k]=1;
              k++;
          }
      }
      for(i=0;i<nums.size();i++)
      {
          if(nums[i]==2)
          {
              t[k]=2;
              k++;
          }
      }

      for(i=0;i<nums.size();i++)
          nums[i]=t[i];
    }
};
