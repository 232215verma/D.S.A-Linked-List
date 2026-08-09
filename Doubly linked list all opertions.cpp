#include<iostream>
using namespace std;
class node{
	public:
int data;
node* next;
node* prev;
node(int val){
	data=val;
	next=prev=NULL;
}
};
class doublylist{
	node* head;
	node* tail;
	public:
		doublylist(){
			head=tail=NULL;
		}
		void pushfront(int val){
			node* newnode=new node(val);
			if(head==NULL){
				head=tail=newnode;
			}else{
				newnode->next=head;
				head->prev=newnode;
				head=newnode;
			}
		}
		void pushback(int val){
			node* newnode=new node(val);
			if(head==NULL){
				head=tail=newnode;
			}else{
			newnode->prev=tail;
			tail->next=newnode;
			tail=newnode;
			}
		}
		void popfront(){
			node* temp=head;
			if(head==NULL){
				return ;
			}
			head=head->next;
			if(head!=NULL){
				head->prev=NULL;
				temp->next=NULL;
				delete temp;
			}
		}
			void popback(){
			node* temp=tail;
			if(head==NULL){
				return ;
			}
			tail=tail->prev;
			if(tail!=NULL){
			
			
			tail->next=NULL;
			temp->prev=NULL;
			delete temp;
		}
		}
		void print(){
			node* temp=head;
			if(head==NULL){
				return ;
			}
		
	
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
		}
};
int main(){
	doublylist ll;
	ll.pushfront(2);
	ll.pushfront(4);
	ll.pushfront(5);
	ll.pushback(6);
	
//	ll.print();
//	ll.popfront();
//	ll.print();
	ll.popback();
	ll.print();
}
