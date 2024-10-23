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

int search(int key){
	Node *temp=head;
	int pos=0;
	while(temp!=NULL){
		if(temp->data==key){
			return pos;
		}
		temp=temp->next;
		pos++;
	}
	return-1;
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
    int position=search(2);
    if(position==-1){
    	cout<<"Element not found in list"<<endl;	
	}else{
		cout<<"Element found at position"<<position<<endl;
	}

    return 0;
}

