#include<iostream>
using namespace std;
int input(int arr[],int n){
	for(int i = 1;i<n;i++){
		std::cout<<"nhap phan tu trong mang :";
		cin>>arr[i];
	}
}
int place_max(int arr[],int n){//tim vi tri mang chua so lon nhat
	int flag = 1;
	for(int i = 1;i<n;i++){
		if(arr[i]>arr[flag])
		flag = i;
	}
	return flag;
}
int place_min(int arr[],int n){//tim vi tri mang chua so nho nhat
	int flag = 1;
	for(int i = 1;i<n;i++){
		if(arr[i]<arr[flag])
		flag = i;
	}
	return flag;
}
int main(){
 int arr[100];
 int n;
 std::cout<<"nhap n : ";
 cin>>n;
 input(arr,n);
 std::cout<<"vi tri mang chua so nho nhat la : "<<place_min(arr,n);
 std::cout<<endl;
 std::cout<<"vi tri mang chua so lon nhat la : "<<place_max(arr,n);

}
