//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto j:mp)
        {
            if(j.second>1)
            {
                ans.push_back(j.first);
            }
        }
        if(ans.size()==0) return {-1};
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends