class Main
{
    // Recursive function to count the derangements of an n–element set
    public static int derangements(int n)
    {
        // base case
        if (n == 1 || n == 2) {
            return n - 1;
        }
 
        // recur using the recurrence relation
        return (n - 1) * (derangements(n - 1) + derangements(n - 2));
    }
 
    public static void main(String[] args)
    {
        int n = 4;
        System.out.printf("The total number of derangements of a %d–element set is %d",
                n, derangements(n));
    }
}
