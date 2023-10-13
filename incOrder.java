import java.util.Scanner;
//check if an array is sorted in an ascending order or not.
public class incOrder {
    public static void main(String[] args){
        
        Scanner sc=new Scanner(System.in);
        int size = sc.nextInt();
        int arr[]=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        
        boolean isAscending=true;
        for(int i=0;i<size-1;i++){
            
            if(arr[i]<arr[i+1]){
                isAscending=false;
            }
            
        }
        if(isAscending){
            System.out.println("An array is in sorted order");
        }
        else{
            System.out.println("An array is in unsorted order");
        }
    }
    
}
