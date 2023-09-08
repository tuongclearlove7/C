#include<bits/stdc++.h>
#include <iostream>

int tim_x_trong_mang(int a[], int x){
	
	
}


//cho 1 mang a gom n phan tu va 1 mang b gom m phan tu 
//(ca 2 mang deu da duoc sap xep tang dan).
//Hay tao thanh mang c la gop cua 2 mang a va b
// sao cho mang c van duoc sap xep tang dan (k duoc sort lai mang c) 
void ket_hop_mang_va_sap_xep(int a[], int b[], int c[]){
	
	for(int i = 0; i<10;++i){
		for(int j =i; j<10;++j){
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
	
	for(int i = 1; i<10;++i){
	
		std::cout<<a[i];
	}
	std::cout<<std::endl;
	
	
	for(int i = 1; i<10;++i){
	
		std::cout<<b[i];
	}
	std::cout<<std::endl;
	
	
	
	return;
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

int binary_search(int a[], int x){
	
	
	    int left = 0;
        int right =10;

        for (int i = left; i <= right; i++){
            
            int mid = (left + right)/2;
            
            if(a[mid] == x){
                return mid;
            }else if(a[mid] > x){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return 0;
}

main() {
	
	int a[10] = {1,2,3,4,5,6,7,9,8};
	int b[10] = {1,2,3,4,5,6,7,9,11};
	int c[10];

	std::cout<<binary_search(a,3)<<std::endl;
	
	ket_hop_mang_va_sap_xep(a,b,c);
	


	
}
