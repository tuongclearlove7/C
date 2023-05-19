#include<bits/stdc++.h> 

int n = 4, k = 4;
int a[20];

void xuat(int k) {
	for (int i = 1; i <= k; i++) 
		std::cout << a[i]<<" ";
	std::cout << "\n";
}

int cnk(int n, int k) {
	if (k == 0 || k == n)
		return 1;
	return cnk(n - 1, k) + cnk(n-1,k-1);
}

void lkth(int n, int k) {

	for (int i = 1; i < k; i++)a[i] = i; xuat(k);

	for (int c = 1; c < cnk(n, k); c++) {
		int i = k; while (a[i] == n - k + i)i--;
		a[i] = a[i] + 1;
		for (int j = i + 1; j <= k; j++)
			a[j] = a[j - 1] + 1;
		xuat(k);
	}
		

}

int gt(int n){
	if(n==0)return 1;
	return n*gt(n-1);
}

void lkhv(int n){
	for(int i = 1; i<=n; i++)a[i]=i;xuat(n);
	
	for(int c=1; c< gt(n); c++){
		int j = n-1;while(a[j]>a[j+1])j=j-1;
		int i =n;while(a[i]<a[j]) i = i-1;
		int temp = a[i];a[i]=a[j];a[j]=temp;
		j=j+1;i=n;
		while(j < i){
			temp = a[i];
			a[i]=a[j];
			a[j] = temp;
			i = i-1; 
			j=j+1;
		}
		xuat(n);
	}
}

int main() {

	//lkth(n,k);
	lkhv(n);

}






























