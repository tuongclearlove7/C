#include<iostream>
#include<fstream>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include<algorithm>
#define ZERO_MINPlayer 0
#define one 1
#define two 2
#define three 3
#define four 4
#define five 5
#define six 6
#define seven 7
#define eight 8
#define nine 9
#define TEN_MAXPlayer 10

using namespace std;

//algorithm selection sort
//handle static array

int output_array(int arr[]) {

	ofstream outfile;
	outfile.open("C:\\Users\\clearlove7\\Documents\\GitHub\\C\\c c++\\Code Dev-C\\selection sort\\Path\\songuyen.txt");

	cout<<"cac phan tu trong mang la : ";
	
			for (int i = ZERO_MINPlayer ; i < five; i++) {
				cout<<arr[i]<<" ";
				outfile << arr[i] << " ";
	}

	outfile.close();
}

int maxmin_array(int arr[]) {

	int max = arr[ZERO_MINPlayer];
	int min = arr[ZERO_MINPlayer];

			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(arr[i] > max) {
					max = arr[i];
		}
	}
	cout<<"max la : " << max <<endl;

			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(arr[i] < min ) {
					min = arr[i];
		}
	}
	cout<<"min la : " << min;
}

int sort(int arr[]) {
	//bubble sort
	//sắp xếp nổi bọt
	int s;
	int flag = ZERO_MINPlayer;

		for (int i = ZERO_MINPlayer ; i < five; i+=one) {
			for (int j = i ; j < five; j+=one) {
				if (arr[i] < arr[j]) {
					flag = arr[i];
					arr[i] = arr[j];
					arr[j] = flag;	
			}
		}
	}

	cout<<"ket qua sap xep la : ";
	
			for (int i = ZERO_MINPlayer ; i < five; i++) {
				cout<<arr[i]<<" ";
	}
}

int place_maxmin_arr(int arr[]) {

	int place;

			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(arr[i]>arr[place]) {
					place = i;
		}
	}
	
	cout<<"vi tri so "<<place<<" chua so lon nhat trong mang static\n";

			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(arr[i]<arr[place]) {
					place = i;
		}
	}
	
	cout<<"vi tri so "<<place<<" chua so nho nhat trong mang static";
}

int find_num_place(int arr[], int x) {

	int num;
			
			cout<<"nhap vi tri can tim so : ";
			cin>>x;
			
			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(x==i) {
				  num = arr[i] ;
		}
	}

	cout<<"vi tri thu "<< x <<" la so : ";
	return num;
}	

int count_numinarr(int arr[]){

	int count;

			for(int i = ZERO_MINPlayer ; i < five; i++) {
				count++;	
	}
	
	cout<<"so phan tu trong mang tinh la : ";
	return count;
}

int locate(int arr[],int x){
			
			cout<<"dao mang : ";
	 		for(int i = 4; i >= 0; i--){
				cout<<arr[i]<<" ";		
	}
}

int find_first_x(int arr[], int x) {

	int place;
	
			cout<<"nhap so can tim trong mang : ";
			cin>>x;
			
			for(int i = ZERO_MINPlayer ; i < five; i++) {
				if(arr[i]==x) {
					place = i ;
		}
	}
	
	cout<<"phan tu "<<x<<" o vi tri thu : ";
	return place;
}


int find_last_x(int arr[], int x) {
	
	locate(arr,x);
	find_first_x(arr,x);

}

int handle() {

		int choose = -one;
		static int arr[TEN_MAXPlayer]= {eight,two,one,four,TEN_MAXPlayer};
		static int key[TEN_MAXPlayer] = {ZERO_MINPlayer ,one,two,three,four,five,six,seven,eight,nine};
		int n = one;
		int x = one;
	
			cout<<"ban muon xem bao nhieu bai tap : ";
			//cin>>n;
			
			for(int i = ZERO_MINPlayer; i < n; i++) {
				do {
					cout<<"\n\n\n\n";
					cout<<"key : 1. Tim gia so max so min trong mang\n";
					cout<<"key : 2. Tim vi tri cua phan tu trong mang\n";
					cout<<"key : 3. Sap xep phan tu trong mang theo gia tri tang dan\n";
					cout<<"key : 4. Tim vi tri mang chua so lon nhat va nho nhat trong mang static\n";
					cout<<"key : 5. Xuat ra phan tu trong mang\n";
					cout<<"key : 6. Tim so tu vi tri nhap vao\n";
					cout<<"key : 7. dem trong mang co bao nhieu phan tu\n";
					cout<<"key : 8. dao mang tinh\n";
					
					cout<<"- chon chuong trinh : ";
					cin>>choose;
					if(choose == key[ZERO_MINPlayer] || choose > key[nine]) {
						cout<<"- k co bai nay vui long nhap lai";
						system("cls");
					}
					switch(choose) {
						case one :
							maxmin_array(arr);
							break;
						case two :
							cout<<find_first_x(arr,x);
							break;
						case three:
							sort(arr);
							break;
						case four :
							place_maxmin_arr(arr);
							break;
						case five :
							output_array(arr);
							break;
						case six :
							cout<<find_num_place(arr,x);
							break;
						case seven :
							cout<<count_numinarr(arr);
							break;
						case eight :
							locate(arr,x);
							break;
						case nine :
							cout<<find_last_x(arr,x);
							break;	
			}
		}	while(choose==key[ZERO_MINPlayer] || choose>key[nine]);
	}
}

int test(int arr[],int x) {

	int map;

				for(int i = four; i >= ZERO_MINPlayer ; i--) {
					cout<<arr[i]<<' ';
	}
	cout<<"\n";

}

int array(int arr[],int x) {

	int map;
	int ar[five]= {test(arr,x)};

				for(int i= ZERO_MINPlayer ; i < one; i++) {
					cout<<ar[i]<<" ";
					if(arr[i]==x) {
						map=i;
		}
	}

	return map;
}

int main() {

	cout<<"=====================Menu========================\n";
	
	handle();
	
	cout<<"\n======================END========================";
	
	return ZERO_MINPlayer;
}












