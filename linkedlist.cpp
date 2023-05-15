#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};
void insertAtTail(node* &head,int n){
	if(head == NULL){
		head->data = n;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = n;
}
void display(node* head){
	node* temp =head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insetAtTail(head,3);
	display(head);
}