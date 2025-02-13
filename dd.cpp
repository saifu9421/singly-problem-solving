#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {}
};

// Function to remove duplicates from an unsorted linked list
void remove(Node *head) {
    if (!head) return;  // Edge case: empty list

    Node *current = head;

    while (current != nullptr) {
        Node *prev = current;
        Node *temp = current->next;

        while (temp != nullptr) {
            if (current->val == temp->val) {
                // Remove duplicate node
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

// Helper function to print the linked list
void printList(Node *head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Example usage
int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    remove(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}
