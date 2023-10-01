#include <bits/stdc++.h>
using namespace std;

int main()
{
    int element;  //No. of element in array
    cin>>element;
    int a[element];
    // Taking input in array
    for(int i=0;i<element;i++){
        cin>>a[i];
    }
    
    unordered_map<int,int> mp;
    vector <int> ans;
    for(int i=0;i<element;i++){
        mp[a[i]]++;
    }
    for(auto i:mp){
        if(i.second>1){
            ans.push_back(i.first);
        }
    }
    //Output 
    if(ans.size()<1){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }   
    }

    return 0;
}
