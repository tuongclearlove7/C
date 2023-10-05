#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};
typedef struct node* NODE;

NODE makeNode(int x){
	NODE newNode=new node;
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=NULL;
	return newNode;
}

int size(NODE head){
	int count=0;
	while(head!=NULL){
		++count;
		head=head->next; 
	}
	return count;
}
void printL(NODE head){
	while(head !=NULL){
		cout<<head->data<<' ';
		head=head->next;
	}
	
}

void insertFirst(NODE &head, int x){
	NODE newNode=makeNode(x);
	newNode->next=head;
	if(head !=NULL){
		head->prev=newNode;
		head=newNode;
	}else if(head==NULL){
		head=newNode;
	}
		
}
void insertLast(NODE &head, int x){
	NODE newNode=makeNode(x);
	if(head==NULL){
		head=newNode; 
		return;
	}
	NODE temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
}
void insertMid(NODE &head, int value, int vitri){
	int n=size(head);
	if(vitri<1||vitri>n+1){
		return;
	}
	if(vitri==1){
		insertFirst(head,value);
	}
	NODE temp=head;
	for(int i=1;i<=vitri-1;i++){
		temp=temp->next;
	}
	NODE newNode=makeNode(value);
	newNode->next=temp;
	temp->prev->next=newNode;
	newNode->prev=temp->prev;
	temp->prev=newNode;
}
int main(){
	NODE head=NULL;
	while(true){
		cout<<"-------------Doubly linked list -------\n";
		cout<<"1. insertFirst\n";
		cout<<"2. insertLast\n";
		cout<<"3. insertMid\n";
		cout<<"4. IN\n";
		cout<<"0. exit !\n";
		cout<<"option : ";
		int option;
		cin>>option;
		if(option==1){
		int value;
		cout<<"Nhap value: ";
		cin>>value;
		insertFirst(head, value);
		}else if(option==2){
		int value;
		cout<<"Nhap value: ";
		cin>>value;
		insertLast(head, value);
		}else if(option==3){
		int value,vitri;
		cout<<"Nhap value: ";
		cin>>value;
		cout<<"Nhap vitri: ";
		cin>>vitri;
		insertMid(head, value,vitri);
		}else if(option ==4){
			printL(head);
			cout<<endl;
		}
	}
	
	
	return 0;
}
