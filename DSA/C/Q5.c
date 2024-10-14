#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to detect the cycle
struct ListNode* detectCycle(struct ListNode *head) {
   //write your code here
}

// Helper function to create a new node
struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

// Driver code to test the cycle detection
int main() {
    struct ListNode *head = createNode(3);
    head->next = createNode(2);
    head->next->next = createNode(0);
    head->next->next->next = createNode(-4);
    head->next->next->next->next = head->next;  // Creating a cycle

    struct ListNode* cycleNode = detectCycle(head);
    
    if (cycleNode) {
        printf("Cycle detected at node with value: %d\n", cycleNode->val);
    } else {
        printf("No cycle detected\n");
    }

    return 0;
}
