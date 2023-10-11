//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int> ans;
        sort(arr, arr+n);  
        for(int i=1; i<n; i++)
        {
            if(arr[i-1] == arr[i])
            {
                ans.push_back(arr[i]);
                while(arr[i-1] == arr[i] and i<n)
                    i++;
                i--;
            }
        }
        
        if(ans.size() == 0){
            ans.push_back(-1);
            return ans;
        }
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
