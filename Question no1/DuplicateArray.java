import java.util.*;

class DuplicateArray {
    public static List<Integer> duplicates(int[] a, int n) {
        List<Integer> result = new ArrayList<>();
        HashMap<Integer, Integer> countMap = new HashMap<>();

        for (int num : a) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : countMap.entrySet()) {
            if (entry.getValue() > 1) {
                result.add(entry.getKey());
            }
        }

        if (result.isEmpty()) {
            result.add(-1);
        } else {
            Collections.sort(result);
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        List<Integer> result = duplicates(arr, n);
        System.out.println(result);
    }
}
