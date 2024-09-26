#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
private:
    // Helper function to insert nodes at the tail of the cloned list.
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        // Step 1: Create a clone list (only next pointers are set).
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Create a map to associate original nodes with clone nodes.
        unordered_map<Node*, Node*> oldToNew;
        Node* cloneNode = cloneHead;
        Node* originalNode = head;

        while (originalNode != NULL && cloneNode != NULL) {
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 3: Set the random pointers in the clone list.
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL) {
            if (originalNode->random != NULL) {
                cloneNode->random = oldToNew[originalNode->random];
            } else {
                cloneNode->random = NULL;  // If random pointer is NULL.
            }
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Return the head of the cloned list.
        return cloneHead;
    }
};

// Function to print the list for debugging purposes.
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Node value: " << temp->val;
        if (temp->random) {
            cout << ", Random points to: " << temp->random->val;
        } else {
            cout << ", Random points to: NULL";
        }
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    // Create a sample linked list with random pointers
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next; // 1 -> random points to 3
    head->next->random = head;       // 2 -> random points to 1
    head->next->next->random = head->next; // 3 -> random points to 2

    // Print the original list.
    cout << "Original list:\n";
    printList(head);

    // Clone the list using the Solution class.
    Solution sol;
    Node* clonedList = sol.copyRandomList(head);

    // Print the cloned list.
    cout << "\nCloned list:\n";
    printList(clonedList);

    return 0;
}
