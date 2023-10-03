package saikat;

import java.util.ArrayDeque;
import java.util.LinkedList;

import java.util.Queue;

public class BasicQueue {
    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();

        queue.add(1);
        queue.add(10);
        queue.add(12);
        queue.add(54);
        queue.add(6);

        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());
        System.out.println(queue.remove());

//        System.out.println(queue.peek());

    }
}