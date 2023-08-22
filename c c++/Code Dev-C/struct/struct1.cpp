#include <iostream>
using namespace std;

void bubbleSort(int n){
	
	int sort = 0;
	int i;
	for(i = 0; i<n; i++){
		for(int j = i; j < n; j++){
			if(i>j){
				sort = i;
				i = j;
				j = sort;
				
			}
		}
	}
	
	for(i = 0; i < n; i++){
		cout<<i;
	}
} 
 
 

int sum(long long int test)
{
    // if (test < 1)
    //     return;
    // else {
    //     cout << test << " ";
    //     printFun(test - 1);
    //     cout << test << " ";
    //     return;
    // }
    if(test == 0) return 0;
    else return sum(test-1) + test;	

}

//cho so n hay tinh n giai thua 
int giaithua(int test)
{
   
    if(test == 1) return 1;
    else return test * giaithua(test-1);
	

}

int main()
{
	//sum!
    cout<<sum(5);
    cout<<endl;
    cout<<giaithua(5);
    //bubbleSort(5);
   
    
}















