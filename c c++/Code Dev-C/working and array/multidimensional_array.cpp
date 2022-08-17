#include<iostream>
#include<math.h>

using namespace std;

int myarray(){
	int arr[100];
	int n;
	cout<<"nhap : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	//mang da chieu
	int test[4][3][2] = {
                            {
                                {1, 2},
                                {3, 4},
                                {5, 6}
                            }, 
                            {
                                {7, 8}, 
                                {9, 10}, 
                                {11, 12}
                            }
                        };

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "array[" << i << "][" << j << "][" << k << "] = " 
                     << test[i][j][k] << endl;
            }
        }
    }
}
