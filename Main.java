package saikat;

public class Main {
    public static void main(String[] args) throws Exception {
//        CustomStack stack = new CustomStack();

        CustomStack stack = new DynamicStack();

        stack.push(23);
        stack.push(1);
        stack.push(67);
        stack.push(100);
        stack.push(1012);
        stack.push(112);

        System.out.println(stack.pop());
        System.out.println(stack.pop());
        System.out.println(stack.pop());
        System.out.println(stack.pop());
        System.out.println(stack.pop());
//        System.out.println(stack.pop());

    }
}
