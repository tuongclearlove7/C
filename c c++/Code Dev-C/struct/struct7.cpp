// cho  1 mang a, gom n phan tu va 1 mang b co gom m phan tu ca 2 mang deu duoc sap xep tang dan hay tao thanh mang c laf hop cua 2 mang a va b
// sao cho mang c van duoc sap xep tan, khong duoc sap xep lai mang c
#include <iostream>
using namespace std;


void sorted(int a[], int b[], int n){
	
	for(int i = 0; i<n;++i){
		for(int j =i; j<n;++j){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			
			if(b[i]>b[j]){
				int t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}
	
}

void mergeArrays(int a[], int n, int b[], int m, int c[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m) {
       if (a[i] <= b[j]) {
           c[k] = a[i];
           i++;
           
       }
       else {
           c[k] = b[j];
           j++;
       }
       k++;
    }
    
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }
    
    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int n=5, m=5;
    int a[n]={2,1,3,7,4};
    int b[m]={1,3,7,8,9};
    int c[n + m];
    
    sorted(a,b,n);
	for(int i=0; i < n;++i){
		mergeArrays(a, n, b, m, c);
	}
    
    cout << "Mang sau khi tron:\n";
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
    return 0;
}

