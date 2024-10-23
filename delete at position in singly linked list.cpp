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
void deleteatposition(int pos){
	if(head==NULL){
		cout<<"The List is empty"<<endl;
		return ;
	}Node *temp=head;
	if(pos==1){
	Node *temp=head;
	head=head->next;
	delete temp;
}else{
	for(int i=0;i<pos-1 && temp!=NULL;i++){
		temp=temp->next;
	}if(temp==NULL || temp->next==NULL){
		cout<<"invalid position"<<endl;
	}
	Node *next=temp->next->next;
	delete temp->next;
	temp->next=next;
}
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
 deleteatposition(3);
 print();
    return 0;
}

