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
void deleteatstart(){
	if(head==NULL){
		cout<<"The List is empty"<<endl;
	}
	Node *temp=head;
	head=head->next;
	delete temp;
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
 deleteatstart();
 print();
    return 0;
}

