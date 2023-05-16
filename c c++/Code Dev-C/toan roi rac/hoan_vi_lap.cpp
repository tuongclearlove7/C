#include<bits/stdc++.h> 
using namespace std;
// n^k , n=4, k=3
int b[20], k=3, n=4;

void print(int k){
	
	for(int i = 1; i<=k; i++)
		cout<<b[i];
	cout<<endl;
	
}

void hv_lap(int n,int k){
	
	for(int i = 1; i <= k; i++) b[i] = 1;
	print(k);
	for(int c = 1; c < pow(n,k); c++) {
		int i = k;
		while(b[i] == n) i = i - 1;
		b[i] = b[i] + 1;
		for(int j = i + 1; j <= k; j=j+1) 
			b[j] = 1;
			print(k);
	}
}


int main(){
	
	hv_lap(n,k);
	
	
} 
