#include <iostream>
#include <string.h>
#include <cstring>
#include <conio.h>
#include <iomanip>
#include<algorithm>
using namespace std;

struct Student{
	char name[100];
	float hoa;
	float ly;
	float toan;
	float tb;
	int masv;
};

bool check(Student arr[], int n) {
	int value;
	for(int i = 0; i < n; i++)
	{
		if(arr[i].masv == value){
			return true;
		}
	}
	return false;
}

Student input(Student arr[],int n){
	int j;
	int key[4] = {101,102,103,104};
	cout<<"| nhap so sinh vien : ";
	std::cin>>n;
		for(int i=1;i<=n;i++) {
			cout<<"| nhap ten : ";
			cin>>arr[i].name;
			cout<<"| vui long nhap ma sinh vien : ";
			cin>>arr[i].masv;
			do {
			if (arr[i].masv!=key[0] && arr[i].masv!=key[1] && arr[i].masv!=key[2] && arr[i].masv!=key[3])
				    cout<<"| Ma sinh vien nay k ton tai vui long nhap lai!!! : ";
				    cin>>arr[i].masv;	
		    }while(arr[i].masv!=key[0] && arr[i].masv!=key[1] && arr[i].masv!=key[2] && arr[i].masv!=key[3]); 
		   		cout<<"| chuc mung ban da nhap dung ma sinh vien bam enter de tiep tuc\n";
			   	cin.ignore(256, '\n');
			   	cout<<"| ";
			   	cin.ignore(256, '\n');
				cout<<"| nhap diem toan : ";
				cin>>arr[i].toan;
				cout<<"| nhap diem hoa : ";
				cin>>arr[i].hoa;
				cout<<"| nhap diem ly : ";
				cin>>arr[i].ly;
	}
}

Student output(Student arr[],int n){
	Student tmp;
	cout<<"| nhap so hoc sinh can xem : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j = i+1; j < n;++j){
            if(arr[i].tb > arr[j].tb){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
		cout<<"\n_________________________________________________________\n";
		cout<<"| "<<i<<". sinh vien "<<strupr(arr[i].name);
		cout<<"\n| ma sinh vien cua sinh vien "<<arr[i].name<<" la : "<<arr[i].masv;
		cout<<"\n| diem toan cua "<<arr[i].name<<" la : "<<arr[i].toan;
		cout<<"\n| diem hoa cua "<<arr[i].name<<" la : "<<arr[i].hoa;
		cout<<"\n| diem ly cua "<<arr[i].name<<" la : "<<arr[i].ly;
		arr[i].tb=(float) (arr[i].toan + arr[i].ly + arr[i].hoa)/3;
		cout<<"\n| diem trung binh cua sinh vien "<<arr[i].name<<" la : "<<arr[i].tb<<"\n";
		if(arr[i].tb >=11)
			cout<<"| khong co xep loai cho so diem nay\n";
		else if(arr[i].tb >= 8) 
			cout<<"| sinh vien "<<arr[i].name<<" xep loai Gioi\n";
	    else if(arr[i].tb >= 6.5)
			cout<<"| sinh vien "<<arr[i].name<<" xep loai Kha\n";
	    else if(arr[i].tb >= 5) 
			cout<<"| sinh vien "<<arr[i].name<<" xep loai Trung binh\n";
		else if(arr[i].tb < 5)
			cout<<"| sinh vien "<<arr[i].name<<" xep loai Yeu\n";
		if(arr[i].tb >=11)
			cout<<"| khong co hoc bong so diem nay\n";
		else if(arr[i].tb >=9) 
			cout<<"| sinh vien "<<arr[i].name<<" duoc hoc bong la 900\n";
	    else if(arr[i].tb >=8)
			cout<<"| sinh vien "<<arr[i].name<<" duoc hoc bong la 800\n";
	    else if(arr[i].tb >=7) 
			cout<<"| sinh vien "<<arr[i].name<<" duoc hoc bong la 700\n";
		else
			cout<<"| sinh vien "<<arr[i].name<<" khong duoc hoc bong\n";
	}
	cout<<"| "<<arr;
}

Student alphabet(){
	
}

Student handle(){
	cout<<"============================Menu========================\n";
		Student arr[100];
		Student rank;
		int n;
		input(arr,n);
		output(arr,n);
	cout<<"\n==========================END===========================\n";
}
int main(){
	handle();
}























