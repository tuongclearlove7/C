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

void maxmin_array(int arr[]) {

						int max = arr[0];
						int min = arr[0];

								for(int i = 0 ; i < 5; i++) {
									if(arr[i] > max) {
										max = arr[i];
							}
						}
						cout<<"max la : " << max <<endl;

			for(int i = 0 ; i < 5; i++) {
				if(arr[i] < min ) {
					min = arr[i];
		}
	}
	cout<<"min la : " << min;

}


int find_first_x(int arr[], int x) {

					int place;
								
								cout<<"nhap so can tim trong mang : ";
								cin>>x;
										
										for(int i = 0 ; i < 5; i++) {
											  if(arr[i]==x) {
												 place = i ;
		}
	}
	
	cout<<"phan tu "<<x<<" o vi tri thu : ";
	return place;
}

int find_num_place(int arr[], int x) {

	int num;
			
			cout<<"nhap vi tri can tim so : ";
			cin>>x;
			
						for(int i = 0 ; i < 5; i++) {
							if(x==i) {
							num = arr[i] ;
		}
	}

	cout<<"vi tri thu "<< x <<" la so : ";
	return num;
}	

int count_numinarr(int arr[]){

						int count;

						for(int i = 0 ; i < 5; i++) {
							count++;	
}
	
	cout<<"so phan tu trong mang tinh la : ";
	return count;
}

void bubbleSort(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                // swap arr[j+1] và arr[i]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
    }
    
    for (int i = 0; i < n; i++)
		cout<<arr[i] << " ";
}
    
    

int sort(int arr[]){
		
	int flag;
					
	for(int i = 0; i<5 ; i++)
		for(int j = i ; j<5 ; j++)
			if(arr[i] > arr[j]){
				flag = arr[i];
				arr[i]=arr[j];
				arr[j] = flag;
			} 

	for (int i = 0; i < 5; i++)
		cout<<arr[i] << " ";
	
}

handlesort_static_arr(){
	
	static int arr[5]={9,3,1,10,2};
	int n = sizeof(arr)/sizeof(arr[0]);

		cout<<"static array : ";
		for (int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}

		cout<<"\n";
		cout<<"sorted static array : ";
		sort(arr);
		cout<<"\nbubbleSort static array : ";
		bubbleSort(arr, n);
		cout<<"\n";
	
}

int input_dynamic_arr(int arr[]){
	
		ofstream outfile;
		outfile.open("C:\\Users\\clearlove7\\Documents\\GitHub\\C\\c c++\\Code Dev-C\\selection sort\\Path\\integer.txt");

			for (int i = 0; i < 5; i++){
				cout<<"input "<<i<<" : ";
				cin>>arr[i];
			}
			
			cout<<"dynamic array : ";
											for (int i = 0; i < 5; i++){
												cout<<arr[i]<<" ";
												outfile << arr[i] << " ";
   }
			outfile.close();
	
}

int locate(int arr[]){
			
		
								cout<<"dao mang : ";
								for(int i = four; i >= 0; i--){
									cout<<arr[i]<<" ";	
	}
}


int max_place(int arr[]){
	
	int MaxPlace;
	
			for(int i = 0 ; i< 5; i++){
				if(arr[i] > arr[MaxPlace]){
					MaxPlace = i;			
		}			
	}
	
	cout<<"vi tri chua phan tu lon nhat la : ";
	return MaxPlace;
}

int min_place(int arr[]){
	
	int MinPlace;
	
									for(int i = 0 ; i < 5; i++){
										if(arr[i] < arr[MinPlace]){
											MinPlace = i;			
		}			
	}
	
	cout<<"vi tri chua phan tu nho nhat la : ";
	return MinPlace;
}

int main() {
	
	int n;
	int arr[5];
	int x;
	

			
	handlesort_static_arr();
	input_dynamic_arr(arr);
	cout<<"\n";
	
	cout<<max_place(arr)<<"\n";
	cout<<min_place(arr)<<"\n";
	
	locate(arr);
	cout<<"\n";
	
	cout<<"sorted dynamic array : ";
	sort(arr);
	
	cout<<"\n";
	maxmin_array(arr);

	cout<<"\n";
	cout<<find_first_x(arr,x);
	
	cout<<"\n";
	cout<<find_num_place(arr,x);

	cout<<"\n";
	cout<<count_numinarr(arr);
	
	return 0;
}








































