#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include<algorithm>
using namespace std;

struct Student{
	char name[100];
	int masv;
};


Student input(Student arr[],int n){
	int j;
	int count =0;
	int hs = 0;
	int key[10] = {101,102,103,104,105,106,107,108};
	cout<<"| nhap so sinh vien : ";
	std::cin>>n;
		for(int i=0;i<n;i++) {
			count++;
			hs--;
			cout<<"| nhap ten : ";
			cin>>arr[i].name;
			cout<<"| vui long nhap ma sinh vien : ";
			cin>>arr[i].masv;
		}
}

Student output(Student arr[],int n){
	Student tmp;
	cout<<"| nhap so hoc sinh can xem : ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j = i+1; j < n;++j){
            if(arr[i].masv > arr[j].masv){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
		cout<<"\n_________________________________________________________\n";
		cout<<"| "<<i+1<<". sinh vien "<<strupr(arr[i].name);
		cout<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
	}
	
	cout<<"\nnhap ma sinh vien ban can tim : ";
	int k;
	cin>>k;
	for(int i=0;i<n;i++){
	
            if(k == arr[i].masv){
                cout<<"\n_________________________________________________________\n";
				cout<<"| "<<i+1<<". sinh vien ban vua tim la : "<<strupr(arr[i].name);
				cout<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
            }
    }

}


int main(){
	
		Student arr[100];
		Student rank;
		int n;
		input(arr,n);
		output(arr,n);
		
}

