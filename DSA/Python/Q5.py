class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def detectCycle(head):
#  write your code here

# Driver code to test the cycle detection
if __name__ == "__main__":
    head = ListNode(3)
    head.next = ListNode(2)
    head.next.next = ListNode(0)
    head.next.next.next = ListNode(-4)
    head.next.next.next.next = head.next  # Creating a cycle

    cycle_node = detectCycle(head)
    
    if cycle_node:
        print("Cycle detected at node with value:", cycle_node.val)
    else:
        print("No cycle detected")
