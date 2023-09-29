#include<bits/stdc++.h>
#include <iostream>

int binarySearch( int arr[], int x ){
	int n  =10;
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid] == x)
			return 1;
		else if(arr[mid] < x) 
			left = mid+1;
		else right = mid-1;
	}
	return 0;
}

main() {
	
	int a[10] = {1,2,3,4,5,6,7,9,8};
	int b[10] = {1,2,3,4,5,6,7,9,11};
	int c[10];
	
	while(true){
		std::cout<<"nhap x : ";
		int x;
		std::cin>>x;
		if(x == -1) break;
		if(binarySearch(a, x))
			std::cout<<"tim thay x"<<std::endl;
		else std::cout<<"khong tim thay!"<<std::endl;
	}
	
	


	
}
