#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
typedef struct node* NODE;
bool checkEmpty(NODE s,NODE front, NODE tail){
	return (front==NULL &&tail==NULL);
}
void enqueue(NODE &s,int value,NODE &front, NODE &tail ){
	NODE newNode=new node();
	newNode->data=value;
	newNode->next=NULL;
	newNode->prev=NULL;
	if(checkEmpty(s,front,tail)==true){
		front=tail=NULL;
	}else{
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}
}
void dequeue(NODE &s,NODE &front, NODE &tail){
	if(checkEmpty(s,front,tail)==true){
		cout<<"QUEUE NULL"<<endl;
		return;
	}
	NODE temp=front;
	front=front->next;
	if(front!=NULL){
		front->prev=NULL;
	}else{
		tail=NULL;
	}
}
int getFront(NODE &s,NODE front, NODE tail){
	if(checkEmpty(s,front,tail)==true){
		cout<<"QUEUE NULL"<<endl;
		return -1;
	}
	return front->data;
}
void output(NODE &s,NODE front, NODE tail){
  while(front !=NULL){
  	cout<<front->data<<" ";
  	front=front->next;
  }
}

int main(){
	NODE s=NULL;
	NODE front=NULL;
    NODE tail=NULL;
    int lc;
 do{
 	cout<<"-------------------------\n";
 	cout<<"1.enqueue \n";
 	cout<<"2.dequeue \n";
 	cout<<"3.getFront \n";
 	cout<<"4.output \n";
 	cout<<"5.Nhap option:";
 	cin>>lc;
 	cout<<endl;
 	if(lc==1){
 		cout<<"Input value into queue: ";
 		int value;
 		cin>>value;
 		enqueue(s,value,front,tail);
 	}else if(lc==2){
 		dequeue(s,front,tail);
 	}else if(lc==3){
 		int topE=getFront(s,front,tail);
 		cout<<"top element is "<<topE<<endl;
 		
 	}else if(lc==4){
 		output(s,front,tail);
 	}
 	
 }while(lc!=0);
	
	return 0;
}
