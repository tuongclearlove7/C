#include<bits/stdc++.h>
#include <iostream>

int tim_x_trong_mang(int a[], int x){
	
	
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
	
	


	
}
