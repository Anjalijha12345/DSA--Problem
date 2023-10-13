import java.util.Scanner;

public class max_min {
    public static void main(String[] args){
        
        Scanner sc= new Scanner(System.in);
        System.out.println("enetr the size of an array : ");
        int size=sc.nextInt();
        int arr[]=new int[size];
        System.out.println("Enter the elements of an array : ");
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }
        int maxNo=Integer.MIN_VALUE;
        int minNo=Integer.MAX_VALUE;
        for(int i=0;i<size;i++){
            if(arr[i]<minNo){
                minNo=arr[i];
            }
            if(arr[i]>maxNo){
                maxNo=arr[i];

            }

        }
        System.out.println("max number is : "+maxNo);
        System.out.println("minimum number is : "+minNo);


    }
}
