import java.util.HashMap;
import java.util.Scanner;

public class DuplicateInArray{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int[] ar=new int[size];
        for(int i=0;i<size;i++){
            ar[i]=sc.nextInt();
        }
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<size;i++){
            map.put(ar[i],map.getOrDefault(ar[i],0)+1);
        }
        for(int key:map.keySet()){
            if(map.get(key)>1){
                System.out.println(key);
            }
        }
    }
    
}