#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;  


void insertatend(int n){
	Node *newNode=new Node;
	newNode->data=n;
    newNode->next=NULL;
	if(head==NULL){
	head=newNode;
	}
	Node*temp=head;
	while(temp->next!=NULL){
	temp=	temp->next;
	}
	temp->next=newNode;
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
    // Declare an array of elements
    int elements[] = {5, 6, 2, 8, 4};

    // Insert each element from the array into the linked list
    for (int i = 0; i < 5; i++) {
        insertatend(elements[i]);
    }
    
    // Print the linked list after initial insertion
    print();

    // Insert an additional element at the end
    insertatend(11);

    // Print the linked list after the additional insertion
    print();

    return 0;
}


