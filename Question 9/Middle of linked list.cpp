#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) {
        return NULL;
    }
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    
    return head;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    int n = sizeof(values) / sizeof(values[0]);

    ListNode* head = createLinkedList(values, n);

    Solution solution;
    ListNode* middle = solution.middleNode(head);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    std::cout << "Middle Node Value: " << middle->val << std::endl;

    return 0;
}
