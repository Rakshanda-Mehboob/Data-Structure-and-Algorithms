#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        Node *last = head->prev; 
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }
}
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    Node *temp = head;
    
    // If the node to be deleted is the first node (head)
    if (pos == 1) {
        if (head->next == head) {
            // If there's only one node in the list
            delete head;
            head = NULL;
        } else {
            Node *last = head->prev;
            Node *newHead = head->next;
            last->next = newHead;
            newHead->prev = last;
            delete head;
            head = newHead;
        }
        return;
    }
    for (int i = 1; i < pos && temp->next != head; i++) {
        temp = temp->next;
    }
    if (temp->next == head && pos > 1) {
        cout << "Position is invalid" << endl;
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void print() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    cout << "Data elements in circular doubly linked list are: ";
    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(9);
print(); 
    deleteAtPosition(3);  
    print(); 

    return 0;
}

