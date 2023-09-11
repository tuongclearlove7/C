Viết chương trình nhập vào một dãy số nguyên a1, a2, ..., an. Tìm độ dài dãy con tăng dần dài nhất. (Dãy con là dãy các phần tử liên tiếp nhau trong mảng).
#include<iostream>
using namespace std; 

void printLongestDistance(int a[],int n){
	int maxLength; // day con dai nhat. 
	int currentLength=1; // do dai dai con hien tai
	int endIndex=0; // chi so cuoi cung cua day con dai nhat. 
	
	
	for(int i=1;i<n;i++){
		if(a[i]>a[i-1]){
			currentLength++;
			if(currentLength >maxLength){
				maxLength=currentLength;
				endIndex=i;
			}
		}else{
			currentLength=1;
		}
	}
	cout<<"Do dai lon nhat cua mang la: "<<maxLength<<endl;
	cout<<"cac phan tu trong khoang do dai lai: "<<endl;
		for(int i=endIndex-maxLength+1;i<=endIndex;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
}

int main(){
	int n;
	cout<<"Nhap do dai cua mang : ";
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"nhap mang vi tri thu  "<<i+1<<" : ";
		cin>>a[i];
	}
	printLongestDistance(a,n);
	
return 0;	
}
