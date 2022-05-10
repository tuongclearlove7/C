#include <iostream>
#include <string.h>
using namespace std;
int count_num(int n)
{
	int sum = 0, count = 0;
	cout<<"nhap so : ";
	cin>>n;
	while(n!=0){
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
	count_num(n);	
}
