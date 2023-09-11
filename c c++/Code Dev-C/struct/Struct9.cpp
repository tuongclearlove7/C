#include<bits/stdc++.h>
#include <iostream>

//Viết chương trình nhập vào một dãy số nguyên a1, a2, ..., an.
// Tìm độ dài dãy con tăng dần dài nhất. 
//(Dãy con là dãy các phần tử liên tiếp nhau trong mảng).


int tim_do_dai_day_con(int a[], int n){
	
		int maxLength=0;  
		int currentLength=1; 
		int endIndex=0; 
	
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
		std::cout<<"Do dai day con dai nhat : "<<maxLength<<std::endl;		
		
		return 0;	
}

int main() {
	
	int a[10] = {1,2,3,9,5,6,7,9,8};
	
	tim_do_dai_day_con(a, 10);
	
	
	


	
}
