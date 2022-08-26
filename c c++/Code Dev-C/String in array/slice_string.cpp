#include<iostream>
#include<math.h>
#include<string.h>
#define FALSE 0
#define TRUE 1
#define zero 0
#define one 1 
#define two 2
#define three 3
#define four 4
#define five 5
#define PI 3.14
using namespace std;

struct str_char{
	char str[100];
	string stri;
};

str_char string_function(char arr[]){
	
			for(int i = zero; i < five; i++){
				cout<<arr[i];
			}
			cout<<endl;
			
			for(int i = four ; i >= zero; i--){
				cout<<arr[i];
			}	
			
			cout<<endl;
			for(int i = zero ; i < four; i++){
				cout<<arr[i];
			}
			cout<<endl;
			
			for(int i = one; i < five; i++){
				cout<<arr[i];			
			}
			cout<<endl;
			
			for(int i = zero; i < one; i++){
				cout<<arr[one]<<arr[two]<<arr[three];			
			}
			cout<<endl;
			
			for(int i = zero; i < one; i++){
				cout<<arr[one]<<arr[two];			
			}
			cout<<endl;
			
			for(int i = zero; i < one; i++){
				cout<<arr[one];
	}
}
int main(){
	
	static char arr[100] = {"tuong"};
	string_function(arr);
	str_char arra[100];
	cout<<'\n'<<PI;
	char *pointer;
	cout<<pointer;
	
	return zero;
}









