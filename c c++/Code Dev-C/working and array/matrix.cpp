#include<bits/stdc++.h>
#include <conio.h>

int matrix_duoi(int arr[][100], int n){
	
	 for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                arr[i][j] = 0;
            }
        }
    }

    std::cout << "\n\nMa tran tam giac duoi : " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
	
}

int matrix_tren(int arr[][100], int n){
	
	 for (int a = 0; a < n; a++) {
        for (int k = 0; k < n; k++) {
            if (a > k) {
                arr[a][k] = 0;
            }
        }
    }

    std::cout << "\n\nMa tran tam giac tren: " << std::endl;
    for (int a = 0; a < n; a++) {
        for (int k = 0; k < n; k++) {
            std::cout << arr[a][k] << " ";
        }
        std::cout << std::endl;
    }
	
}

void hanle_tren(){
	
	int n=3;

    std::cout << "kich thuoc ma tran : " << n;

    int arr[100][100] = {
		
		{1,2,3},{4,5,6},{7,8,9}
	};

    
	
	matrix_tren(arr,n);
}

void hanle_duoi(){
	
	int n=3;

    std::cout << "kich thuoc ma tran : " << n;

    int arr[100][100] = {
		
		{1,2,3},{4,5,6},{7,8,9}
	};

	
	matrix_duoi(arr,n);
}

int matrix_vuong(int arr[][100], int n){
	
	 
	std::cout << "\nMa tran vuong: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
	
}


void hanle_vuong(){
	
	int n=3;

    std::cout << "kich thuoc ma tran : " << n;

    int arr[100][100] = {
		
		{1,2,3},{4,5,6},{7,8,9}
	};

	
	matrix_vuong(arr,n);
}


 

int main(){

	int choose;
	
   	do{

	std::cout<<"chon ma tran tam giac : ";
	
	std::cin >> choose;
	
	switch(choose)
	{
		case 1: 
			hanle_vuong();
			break;
		case 2:
			hanle_tren();
			break;
		case 3:
			hanle_duoi();
			break;
		case 0:
			std::cout<<"thoat!";
			break;
	}

	}while(choose!=0);
    
}









