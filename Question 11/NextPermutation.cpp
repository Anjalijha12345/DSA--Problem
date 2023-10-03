class Solution {
public:
    
    void rev(vector<int> &a,int l,int r){
        
        while(l<r){
            swap(a[l],a[r]);
            l++,r--;
        }
    }
    
    void nextPermutation(vector<int>& a) {
     int pos=-1;
        int n = a.size();
        
        for(int i = n-1;i>=1;i--){
            if(a[i-1]<a[i]){
                pos=i;
                break;
            }
        }
        if(pos==-1) {
            rev(a,0,n-1);
            return ;
            
        }
        int newpos=pos;
        for(int i =n-1;i>=pos;i--){
            if(a[i]>a[pos-1]){
                newpos=i;
                break;
            }
        }
        
        swap(a[pos-1],a[newpos]);
        
        rev(a,pos,n-1);
        return;
        
    }
};
