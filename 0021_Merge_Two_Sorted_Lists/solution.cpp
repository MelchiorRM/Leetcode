#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode temp;
            ListNode* tail = &temp;
            while (list1 && list2) {
                if (list1->val <= list2->val) {
                    tail->next = list1;
                    list1 = list1->next;
                } else {
                    tail->next = list2;
                    list2 = list2->next;
                }
                tail = tail->next;
            }
            tail->next = list1 ? list1 : list2;
            return temp.next;
        }
};
void printList(ListNode* head) {
    while(head) {
        cout << head->val;
        if(head->next) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}
ListNode* createNewList(const int arr[], int size) {
    if(size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for(int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}
int main()  {
    Solution sol;
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};
    ListNode* list1 = createNewList(arr1, sizeof(arr1)/sizeof(arr1[0]));
    ListNode* list2 = createNewList(arr2, sizeof(arr2)/sizeof(arr2[0]));
    ListNode* mergedList = sol.mergeTwoLists(list1, list2);
    cout << "Merged List: ";
    printList(mergedList);
    return 0;
}