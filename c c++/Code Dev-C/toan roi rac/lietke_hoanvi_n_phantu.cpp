#include <bits/stdc++.h>
//liet ke hoan vi cua n phan tu
int b[20], n = 3, k=3, t[20];
void print(int k) {
	for (int i = 1; i <=k; i++)
		std::cout<<b[i];
	std::cout<<std::endl;
	
}

void trY(int i) {

	for(int j = 1; j <= n; j++){
		if(t[j]==0){
		   b[i]=j;
		   t[j] = 1;
		   if(i==n) print(n);
		   else trY(i+1);
		   t[j]=0;
		}
	}
	
}
main() {
	trY(1);
}














