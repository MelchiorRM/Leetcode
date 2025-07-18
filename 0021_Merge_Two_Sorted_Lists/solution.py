class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list_A: ListNode, list_B: ListNode) -> ListNode:
        dummy = ListNode()
        tail = dummy
        while list_A and list_B:
            if list_A.val <= list_B.val:
                tail.next = list_A
                list_A = list_A.next
            else:
                tail.next = list_B
                list_B = list_B.next
            tail = tail.next
        tail.next = list_A if list_A else list_B
        return dummy.next
    def create_list(arr):
        if not arr:
            return None
        head = ListNode(arr[0])
        current = head
        for value in arr[1:]:
            current.next = ListNode(value)
            current = current.next
        return head
    def print_list(node):
        while node:
            print(node.val, end=" -> ")
            node = node.next
        print("None")
    def test():
        sol = Solution()
        list_A = sol.create_list([1, 2, 4])
        list_B = sol.create_list([1, 3, 4])
        merged_list = sol.mergeTwoLists(list_A, list_B)
        sol.print_list(merged_list)
    if __name__ == "__main__":
        test()