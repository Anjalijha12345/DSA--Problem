class Solution{
  public:
    vector<int> duplicates(long long a[], int n) {
       map<int,int> m; 
       vector<int> v; 
       for(int i=0;i<n;i++) // O(nlogn)
           m[a[i]]++;
       for(auto &p: m)  // O(n)
           if(p.second > 1)
             v.push_back(p.first);
       if(!v.size()) return {-1};
       return v;
    }
    // Time : O(nlogn)
    // Space : O(n)
    // Run under 1 sec
};
