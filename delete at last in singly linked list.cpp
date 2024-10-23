#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;  

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;  
}
void deleteLast(){
	if(head==NULL){
		cout<<"The List is empty"<<endl;
		return;
	}
	if(head->next==NULL){
		delete head;
		head=NULL;
		return;
	}
	Node *temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
		delete temp->next;
		temp->next=NULL;
}

void print() {
    cout << "Data elements in single linked list: ";
    Node *temp = head;
    while(temp != NULL) {  
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;  
}

int main() {
    insert(5);
    insert(6);
    insert(2);
    insert(8);
    insert(4);
    print();
    deleteLast();
    print();
    return 0;
}

