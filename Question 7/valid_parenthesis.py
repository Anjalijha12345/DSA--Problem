class Solution(object):
    def isValid(self, s):
        stack = [] 
        for c in s: 
            if c in '([{': # if the character is an opening bracket
                stack.append(c) 
            else: # if the character is a closing bracket
                if not stack or \
                    (c == ')' and stack[-1] != '(') or \
                    (c == '}' and stack[-1] != '{') or \
                    (c == ']' and stack[-1] != '['):
                    return False # the string is not valid, so return false
                stack.pop()
        return not stack 
