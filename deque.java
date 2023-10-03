package saikat;

import java.util.ArrayDeque;

import java.util.Deque;

public class deque {
    public static void main(String[] args) {
        Deque<Integer> deque = new ArrayDeque<>();

        deque.addFirst(123);
        deque.addFirst(12);
        deque.addFirst(310);

        System.out.println(deque.peek());
    }
}
