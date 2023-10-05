#include<iostream>
#include<math.h>
using namespace std;
struct Node{
      int data;
      Node *next;
};

typedef struct Node* node;

node makeNode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}

bool checkEmpty(node a){
//	if(a==NULL){
//		return false;
//	}
	return a==NULL;
}
// /0
int Size(node a){
	int dem=0;
	while(a!=NULL){
		dem++;
		a=a->next;
	}
	return dem;
}
void insertFirstInList(node &a, int k){
	node tmp=makeNode(k);
	if(a==NULL){
		a=tmp;
	}else{
	 tmp->next=a;
	 a=tmp;
	}
}
void in(node a){
	cout<"======================================\n";
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
	cout<<"======================================\n";
}
int findTheLagerstElement(node a){
	int max=0;
	while(a!=NULL){
		if(a->data>max){
			max=a->data;
		}
		a=a->next;
	}
	return max;

}

int SumAllElementInList(node a){
	int sumE=0;
	while(a!=NULL){
		sumE+=a->data;
		a=a->next;
	}
	return sumE;
}

bool isPrime(int x) {

  if (x < 2) {
    return false;
  }

  for (int i = 2; i <= sqrt((float)x); i++) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}
int coutSumIsPrime(node &a){
	int sumE=0;
	while(a != NULL){
		if(isPrime(a->data)==true){
			sumE++;
		}
		a = a->next;
	}
	return sumE;
}

Node insert_an_element(node &a, int x, int value){
	node new_node=makeNode(value);
	node current_node=a;
	for(int i=0;i<x-1;i++){
		current_node=current_node->next;
	}
	new_node->next=current_node->next;
	current_node->next=new_node;
	
}



int main(){
       node head = NULL;
	while(1){
		cout << "-----------------MENU---------------\n";
	
		cout << "0. Thoat !\n";
		cout << "-------------------------------------\n";
		cout << "1. chen trong linked list\n";
		cout << "2. in linked list\n";
		cout << "3. Tim so lon nhat trong list\n";
		cout << "4. Tong cac so trong list\n";
		cout << "5. Dem so luong so ngto trong list\n";
		cout << "6. chen 1 vi tri bat ki vao singly linked list\n";
		cout << "Nhap lua chon :";
		int lc; cin >> lc;
		if(lc == 1){
			int x; cout << "Nhap gia tri can chen :"; cin >> x;
			insertFirstInList(head, x);
		}
		else if(lc == 2){
		    in(head);
		}
		else if(lc == 3){
			int maxNumber=findTheLagerstElement(head);
			cout<<" In so lon nhat trong list : "<<maxNumber;
		}
		else if(lc == 4){
			int SumNumber=SumAllElementInList(head);
			cout<<"Tong cac so trong list la: "<<SumNumber;
		}
		else if(lc == 5){
		    int countIsPrime=coutSumIsPrime(head);
		    cout<<"So luong so nguyen to trong list: "<<countIsPrime;
		}else if(lc==6){
			int value,x;
			cout<<"Nhap vi tri can chen: "; cin>>x;
			cout<<endl;
			cout<<"Nhap value: "; cin>>value;
			insert_an_element(head,x,value);
		}
		else if(lc == 0){
			break;
		}
	}
	return 0;
}
