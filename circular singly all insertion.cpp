#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *head=NULL;
void insert(int n){
	Node *newNode=new Node;
	newNode->data=n;
	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}else{
		Node *temp=head;
		while(temp->next!=head){
	    temp=temp->next;
    }
	temp->next=newNode;
	newNode->next=head;
    head=newNode;	
}
}
void insertatpos(int pos, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        head = newNode;
        newNode->next = head; // circular link
    } else {
        // If the position is 1, insert at the head
        if (pos == 1) {
            Node *temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        } else {
            // Insertion at a specific position
            Node *temp = head;
            for (int i = 1; i < pos - 1 && temp->next != head; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}
void insertatend(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    
    if (head == NULL) {
        head = newNode;
        newNode->next = NULL; 
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
       
    }
}
void print(){
	Node *temp=head;
	cout<<"elements in array is"<<endl;
do {
        cout << temp->data << " ";  // Print data of the current node
        temp = temp->next;          // Move to the next node
    } while (temp != head);         // Stop when we are back at the head

    cout << endl;
}

int main(){
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	print();
}
