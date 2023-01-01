#include<iostream>
#include<math.h>
using namespace std;


	
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main(){

	char arr[10]={"2001"};
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=0;i<4;i++){
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=1;i<5;i++){
		cout<<arr[i];			
	}
	cout<<endl;
		for(int i=0;i<1;i++){
		cout<<arr[1]<<arr[2]<<arr[3];			
	}
	cout<<endl;
	for(int i=0;i<1;i++){
		cout<<arr[1]<<arr[2];			
	}
	
	string str = "tuong tran";
    reverseStr(str);
    cout << str;
    
    
    
    
}
