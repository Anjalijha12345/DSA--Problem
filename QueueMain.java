package saikat;

public class QueueMain {
    public static void main(String[] args) throws Exception {
        CustomQueue queue = new CustomQueue(6);

        queue.insert(1);
        queue.insert(10);
        queue.insert(12);
        queue.insert(54);
        queue.insert(6);

        queue.display();

        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());

        queue.display();

    }
}
