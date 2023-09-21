#include <iostream>
using namespace std;


//cho 1 chuoi a gom n ky tu sau do nhap n , viet ham left tinh so ky tu ben trai, 
//viet ham right tinh so ky tu tu ben phai 
//viet ham mid tinh so ky tu o giua 
int len(char a[]){
	
	int len = 0;
	int i =0;
	while(true){
		if(a[i] == '\0'){
			
			return i;
		}
		i++;
	}
	
	
}


int demkt(char a[], int &n){

	int count = 0;
	for(int i =0; i < n; i++){
		
		if(a[i] != ' '){
			count++;
		}	
	}	
	
	return count;
}

int left(char a[] , int n){
	
	for (int i = 0; i < n; i++) {
		
		cout<<a[i];
	}	
	
	return 0;
}

int main(){
	
	char a[1000];
	cin.getline(a,1000);
	int n = len(a);
	int k;
	cout<<len(a)<<endl;
	cout<<a<<endl;
	cout<<demkt(a, n)<<endl;;
	
	left(a,7);
	
}
