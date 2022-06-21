#include<iostream>
#include <fstream> 
#include<string.h>

using namespace std;
int bai1(){
  int temp;
  int n;
  int count = 0;
  cout<<"nhap n : ";
  cin>>n;
  temp = n;
  if(n == 0) count = 1;
  
  while(temp != 0) {
    if(temp % 2 == 1) count++;
    temp = temp / 10;
  }
  cout<<n;
  cout<<"\nco "<<count<<" so le";	
}
int bai2(int arr[],int n){
	cout<<"nhap so phan tu trong mang : ";
	cin>>n;
	for (int i = 0;i<=n;i++){
		cout<<"nhap mang : ";
		cin>>arr[i];
	}
	int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
void nhap(int arr[], int &n){
        cout<<"Nhap n: ";
        cin>>n;
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>arr[i];
    }
}
 
int check(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
void nguyento(int arr[], int n){
	ofstream outfile; 
	outfile.open("nguyento.txt");
    cout<<"\nCac so nguyen to co trong mang la : "<<endl;
    outfile<<"so nguyen to trong mang la : ";
    for(int i=0;i<n;i++){
    	if(check(arr[i])){
    		cout<<arr[i]<<"  ";
    		outfile<<arr[i]<<"  ";
		}
	}
    outfile.close();
}
int tuluan1(){
	int choose=-1;
	int n;
	int arr[100];
	cout<<"chon : ";
	cin>>choose;
	while(choose){
		switch(choose){
			case 1:
				bai1();
			break;
			case 2:
				cout<<"tong cac so le trong mang la : "<<bai2(arr,n);
			break;
			case 3:
				nhap(arr,n);
				nguyento(arr,n);
			break;
		}
		break;
	}
}
int array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
    	cout<<"nhap phan tu trong mang "<<"["<<i<<"] : ";
        cin>>arr[i];
    }
}
int MAX(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    return max;
}
 
int MIN(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (min > arr[i])
            min = arr[i];
    return min;
}
int tuluan2(){
	int arr[1000];
    int n;
    cout<<"nhap n : ";
    cin>>n;
    array(arr, n);
    cout<<"\nMax = "<<MAX(arr, n);
    cout<<"\nMin = "<<MIN(arr, n);
    cout<<"\ntong max min la : "<<MAX(arr,n)+MIN(arr,n);
}
int main() { 
//	string choose;
	int choose=-1;
	cout<<"chon cau : ";
	cin>>choose;
    while(true){
    	switch(choose){
    		case 1:
    			tuluan1();
			break; 
			case 2:
				tuluan2();
			break;
		}
	break;
	}
}













