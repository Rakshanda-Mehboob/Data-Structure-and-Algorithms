#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *head=NULL;
void insert(int n){
	Node *newNode= new Node;
	newNode->data=n;
	newNode->next=head;
	newNode->prev=NULL;
	if(head!=NULL){
		head->prev=newNode;
	}
head=newNode;
}
void insertatend(int n){
	Node *newNode=new Node;
	newNode->data=n;
	newNode->next=NULL;
	newNode->prev=NULL;
	if(head==NULL){
		head=newNode; 
	}else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
	} 
}
void insertatposition(int pos,int n){
		Node *newNode=new Node;
		newNode->data=n;
		if(pos==1)
		newNode->next=head;
		newNode->prev=NULL;
		if(head!=NULL){
			head->prev=newNode;
		}
Node *temp=head;
 for(int i=1;i<pos-1 && temp!=NULL;i++){
      temp=temp->next;	
}if(head==NULL){
	cout<<"position is invalid"<<endl;	
	return;
}
newNode->next=temp->next;
newNode->prev=temp;
if(temp->next!=NULL){
	temp->next->prev=newNode;
}
temp->next=newNode;
	}
void print(){
 cout<<"data elements in linked list are:";
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
cout<<endl;
}
int main(){
	insert(4);
    insert(5);
	insert(6);
	insert(7);
	print();
	insertatend(3);
	insertatposition(3,1);
	print();
	
}
