class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        fast = head
        slow = head
        
        # find middle(slow)
        
        while fast and fast.next is not None:
            fast = fast.next.next
            slow = slow.next
            
        
        # Reversing the linked list
        
        prev = None
        
        while slow:
            tmp = slow.next
            slow.next = prev
            prev = slow
            slow = tmp
            
        # check palindrome
        
        left, right = head, prev
        
        while right:
            if left.val != right.val:
                return False
            left = left.next
            right = right.next
            
        return True
