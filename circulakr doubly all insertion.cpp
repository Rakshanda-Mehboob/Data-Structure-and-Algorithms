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
void insertatposition(int pos, int n) {
    Node *newNode = new Node;
    newNode->data = n;

    if (head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }
 if (pos == 1) {
        Node *last = head->prev; 
        newNode->next = head;
        newNode->prev = last;
        head->prev = newNode;
        last->next = newNode;
        head = newNode;
        return;
    }
 Node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }
    if (temp->next == head ) {
        cout << "position is invalid" << endl;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}
void insertatend(int n){
	Node *newNode=new Node;
	newNode->data=n;
	if(head==NULL){
		head=newNode;
		newNode->next=newNode;
		newNode->prev=newNode;
		return;
	}else{
	Node * last=head->prev;
	newNode->prev=last;
	newNode->next=head;
	last->next=newNode;
	head->prev=newNode;
}
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
	
	
 cout<<"insertion at end"<<endl;
 insertatend(11);
 print();

    return 0;
}

