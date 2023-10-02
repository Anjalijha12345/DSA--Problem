import java.util.*;
import java.util.ArrayList;

public class SolutionQ1 {

     public static ArrayList<Integer> duplicateElement(int[] arr){
          ArrayList<Integer> dup=new ArrayList<>();
          HashSet<Integer> hs=new HashSet<>();

          for(int e:arr){
               if(hs.contains(e)){
                    dup.add(e);
               }
               hs.add(e);
          }

          return dup;
     }    
     public static void main(String[] args) {
          int[] arr={1,2,3,1,2,4,5};
          SolutionQ1.duplicateElement(arr);
     }
}
