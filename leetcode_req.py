class Solution(object):
    def swapPairs(self, head):
        if not head or not head.next:
            return head
        
        pierwszy = head
        drugi = head.next
         
        