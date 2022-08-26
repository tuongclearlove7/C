#include <iostream>
#include <string.h>
using namespace std;


int count_num(int k[]){
	
	int i;
	int count=0;
	for(i=0;i<5;i++){
		cout<<"nhap mang : "; 
		cin>>k[i];
		count++;
	}
	cout<<'\n'<<"co : "<<count<<" phan tu";
}
int count_num_one(int n)
{
	int sum = 0, count = 0;
	cout<<"nhap so : ";
	cin>>n;
	for(int i=0;n!=0;i++){
		sum = sum + n % 10;
		count+=1;
		n=n/10;
	}
	cout<<"tong cac chu so trong n la : ";
	cout<<sum;
	cout<<"\nso luong chu so la : ";
	cout<<count;
}
int main(){
	int n;
	int k[100];
	count_num_one(n);
	cout<<endl;
	count_num(k);
}




































