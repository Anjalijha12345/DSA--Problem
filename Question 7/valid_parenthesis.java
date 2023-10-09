class Solution {
    public boolean isValid(String s) {
         Stack<Character> stack = new Stack<>();
        System.out.println("Please enter");
        for (char x : s.toCharArray()
             ) {

            if(x=='('){
                
                stack.push(')');
            } else if (x=='{') {
                stack.push('}');
                
            } else if (x=='[') {
                stack.push(']');
            } else if (stack.isEmpty() || stack.pop()!=x) {

                return false;
            }

        }


        return stack.isEmpty();
        
    }
}
