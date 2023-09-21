#include <iostream>
using namespace std;

void xoa_phan_tu(int arr[], int &n, int index){
	
	for (int i = index + 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    n--;
    //cout<<n;
   
}
int main(){
	int n = 6;
	  
    int arr[6] = {1, 2, 3, 5, 5 ,5};
    int count=0;
    
    int index;
    cout << "Nhap so can xoa: "; cin >> index;
    
    cout << "MANG BAN DAU: ";
    for(int i = 0; i < n ; i++){
   
        cout << arr[i] << " ";
    }
 
 
  	for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i]==arr[j]) {
                xoa_phan_tu(arr, n, index);
                i--;
            }
        }
	}
	
    
    
    cout <<"mang sau khi xoa tai vi tri "<< index<<endl;
    for(int i = 0; i < n; i++){
    
        cout << arr[i] << " ";
    }
}
