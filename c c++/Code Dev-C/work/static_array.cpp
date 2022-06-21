#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int output_array(int arr[]){
	ofstream outfile;
	outfile.open("songuyen.txt");
	cout<<"cac phan tu trong mang la : ";
	for (int i =0 ;i<5;i++){
		cout<<arr[i]<<" ";
		outfile<<arr[i]<<" ";
	}
	outfile.close();
}
int find_first_x(int arr[], int x){
    for(int i=0;i<5;i++)
        if(arr[i]==x)
            return i;
}
 
int find_last_x(int arr[], int x){
    int map;
    for(int i=0;i<5;i++)
        if(arr[i]==x)
            map=i;
    return map;
}
int max_array(int arr[]){
		int MAX = arr[0];
    for(int i=0; i< 5; i++)
    {
        if(arr[i]>MAX)
        {
            MAX = arr[i];
        }
    }
	cout<<"\nMax la : "<<MAX<<"\n";
}

int soft_array(int arr[]){
	for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
    	cout<<arr[i] << " ";
    }
}
int handle(){
	int choose=-1;
	int arr[]={8,1,2,4,10};
	int n;
	int x;
	cout<<"1. Xuat ra phan tu trong mang\n2. Tim phan tu trong mang\n3. tim gia tri lon nhat trong mang\n";
	cout<<"4. sap xep phan tu trong mang theo gia tri tang dan\n";
	cout<<"- chon chuong trinh : ";
	cin>>choose;
	while(choose){
		switch(choose){
			case 1:
				output_array(arr);			
				break; 
			case 2:
				cout<<"nhap phan tu can tim trong mang : ";
				cin>>x;
				cout<<"phan tu "<<x<<" o vi tri thu : "<<find_first_x(arr,x)<<"\n";
				break;
			case 3:
				max_array(arr);	
				break;
			case 4:
				cout<<"ket qua sap xep la : ";
				soft_array(arr);
				break;
		}
		break;
	}
}
int main(){
	cout<<"=====================Menu========================\n";
	handle();
	cout<<"\n======================END========================";

}
