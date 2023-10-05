#include<iostream>

using namespace std;
// a-z A-Z
int len(char a[]){
	int i=0;
	while(true){
		if(a[i]=='\0'){
			return i;
		}
		i++;
	}
}
int ho (char a[]){
	
	int i=0;
	cout<<"ho: ";
	while(true){
		if(!((a[i]>='a'&& a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))){
			break;
		}
		cout<<a[i];
	    i++;
	}
	cout<<endl;	
	return i;
}
int ten(char a[]){
	int n=len(a)-1;	
	int count=0;
	while(true){	
		if(!((a[n]>='a'&& a[n]<='z')||(a[n]>='A'&&a[n]<='Z'))){
			break;
		}	
		
		n--;
		count++;
	}
	int k=len(a);
	cout<<"ten: ";
	for(int i=k-count;i<k;i++){
	   cout<<a[i];
	}
	cout<<endl;
	return count;
	
}

int dem(char a[]){
	int n=len(a);
	int h=ho(a);
	int t=ten(a);
	cout<<"dem: ";
	for(int i=h;i<n-t;i++){
		cout<<a[i];
	}
}



int main(){
	char a[] = {"nguyen ngoc khanh english"};
	//cout<<"Nhap ho va ten : ";
  //  cin.getline(a,1000);
    
	dem(a);
	
	return 0;
}
