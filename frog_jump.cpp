// link - https://www.codingninjas.com/studio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos

#include <bits/stdc++.h> 

int ff(int n, vector<int> &h, vector<int>&dp)
{
    if(n==0) return 0;

    if(dp[n]!=-1) return dp[n];

    int a=INT_MAX, b=INT_MAX;

    if(n>=1)
    {
        a = ff(n-1, h, dp) + abs( h[n] - h[n-1] );
    }
    if(n>=2)
    {
        b = ff(n-2, h, dp) + abs( h[n] - h[n-2] );
    }

    return dp[n] = min(a,b);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1, -1);
    return ff(n-1, heights, dp);
}