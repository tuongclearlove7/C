#include<bits/stdc++.h>
#include <iostream>

template <typename T> std::string tostr(const T& t)
{
    std::ostringstream os; os<<t; return os.str();
}

int in_arr(int a[], int &n){
	n=5;
	for(int i=0; i<n; ++i){
		a[i]=1;
	}
	return 0;
}



int out_arr(int a[], int n){
	for (int i = 0; i < n; ++i)
    {
        //ptr = &a[i];
        //g=g+tostr(a[i])+"\n";
        //std::cout << *ptr << std::endl;
		std::cout << a[i] << std::endl;
    }
	return 0;
}

// NHAP VAO 1 MANG A GOM N PHAN TU VA 1 SO NGUYEN K HAY KIEM TRA XEM K XUAT HIEN BAO NHIEU TRONG MANG A 
int count_element(int a[], int &n,int k){
	n=5;
	int count=0;
	for(int i=0; i<n; ++i){
		if(a[i] == k){
			count++;	
		}
	}
	return count;
}

int tim_phan_tu_giong_nhau_trong_mang(){
	
	int arr[5]={1,2,3,4,5};
	int arr2[5]={1,2,3,4,5};
	
	for(int j =0; j< 5; ++j){
		int check = arr[j];
		for(int i =0; i< 5; ++i){
			if(check == arr2[i]){
				std::cout<<check<<" ";
			}
		}
	}
	
	
	return 0;
	
}




main() {
	
	
	
	tim_phan_tu_giong_nhau_trong_mang();
	std::cout<<std::endl;
	int* ptr = NULL;
	std:: string g="";
	int soluong=5;
    int a[soluong];
	in_arr(a, soluong);
    out_arr(a, soluong);
    std::cout<<"K xuat hien : "<<count_element(a, soluong, 1)<<" lan"<<std::endl;
	//std::cout << g << std::endl;
	

}
