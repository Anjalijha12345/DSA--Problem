class Solution {
    public static ArrayList<Integer> duplicates(int arr[], int n) {
        // code here
        HashMap<Integer,Integer> mp=new HashMap<>();
          ArrayList<Integer>a=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            if(!(mp.containsKey(arr[i])))
            mp.put(arr[i],1);
            else
            mp.put(arr[i],mp.get(arr[i])+1);
            
            if(mp.get(arr[i])==2)
            {
                a.add(arr[i]);
            }
        }
        if(a.size()==0)
        {
        a.add(-1);
        return a;
        }
        else
        {
            Collections.sort(a);
            return a;
        }
    }
}
