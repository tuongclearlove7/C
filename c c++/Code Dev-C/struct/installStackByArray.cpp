#include<iostream>
using namespace std;
#define MAX 100
struct stack{
	int top;
	int A[MAX];
};

typedef struct stack STACK;

void Init(STACK &x){
	x.top=-1;
}
int empty(STACK &x){
	if(x.top==-1){
		return 1;
	}
	return 0;
}
int checkFull(STACK &x){
	if(x.top==MAX-1){
		return 1;
	}
	return 0;
}
void push(STACK &x, int value){
	if(checkFull(x)==0){
		x.top++;
		x.A[x.top]=value;
	}
}
int top(STACK &x){
	int k;
	if(empty(x)==0){
		k=x.A[x.top];
		return k;
	}else{
		return NULL;
	}
}
int pop(STACK &x){
	int k;
	if(empty(x)==0){
		k=x.A[x.top];
		x.top--;
		return k;
	}
	return k;
}

void input(STACK &x, int n){
	 for(int i=0;i<n;i++){
	 	int value;
	 	cout<<"Nhap value tai vi tri "<<i<<": ";
	 	cin>>value;
	 	push(x, value);
	 }
}
void ouput(STACK &x, int &n){
	for(int i=n-1;i>=0;i--){
		cout<<x.A[i]<<endl;
	}
}


int main(){
	STACK x;
	int n;
	cout<<"Nhap gioi han phan tu trong stack ";
	cin>>n;
	int luachon;
	do{
		cout<<"1. khoi tao stack /n"<<endl;
		cout<<"2. in tat ca cac phan tu co trong stack \n";
		cout<<"3. push 1 phan tu vao stack \n";
		cout<<"4. top \n";
		cout<<"5. pop ( delete) 1 phan tu trong stack\n";
		cout<<"0. exit!\n";
		cout<<"Nhap lua chon : ";
		cin>>luachon;
		if(luachon==1){
			Init(x);
			input(x,n);
			cout<<endl;
		}else if(luachon==2){
			ouput(x,n);
				cout<<endl;
		}else if(luachon==3){
			cout<<"Nhap value";
			int value;
			cin>>value;
			push(x,value);
			n++;
				cout<<endl;
		}else if(luachon==4){
			int number=top(x);
		    cout<<"top"<<number;
		    	cout<<endl;
		}else if(luachon==5){
			int number2=pop(x);
			
			cout<<"pop: "<<number2;
			n--;
				cout<<endl;
				
		}
	}while(luachon!=0);
	
	
	return 0;
}
