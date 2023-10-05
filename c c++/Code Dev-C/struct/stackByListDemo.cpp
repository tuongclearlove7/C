#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next==NULL;
};

typedef struct Node* NODE;

void push(NODE* &top, int x) {
  NODE new_node =new Node();
  new_node->data = x;
  new_node->next = top;
  top = new_node;
}

int pop(NODE &top) {
  if (top == NULL) {
    return -1;
  }

  int data = top->data;
  NODE temp = top;
  top = top->next;
  delete temp;

  return data;
}

int peek(NODE &top) {
  if (top == NULL) {
    return -1;
  }

  return top->data;
}

bool isEmpty(NODE &top) {
  return top == NULL;
}
void print(NODE top) {
  if (top == NULL) {
    return;
  }

  cout << top->data << " ";
  print(top->next);
}

int main() {
  NODE top = NULL;

  int luachon;
  do{
  	    cout<<"------------------------------------------------\n";
		cout<<"1. push value to stack by singly linked list/n"<<endl;
		cout<<"2. print stack /n"<<endl;
		cout<<"3. peek /n"<<endl;
		cout<<"4. pop /n"<<endl;
					
		
		cout<<"0. exit!\n";
		cout<<"Nhap lua chon : ";
		cin>>luachon;
		if(luachon==1){
			int value;
			cout<<"Nhap value : ";
			cin>>value;
			push(top, value);
			cout<<endl;
		}else if(luachon==2){
			print(top);
		}else if(luachon==3){
			int number=peek(top);;
			cout<<number<<endl;
		
		}else if(luachon==4){
		int popNumber=pop(top);
		cout<<popNumber<<endl;
		
		}else if(luachon==0){
			break;
				
		}
	}while(luachon!=0);
  
  

  return 0;
}



