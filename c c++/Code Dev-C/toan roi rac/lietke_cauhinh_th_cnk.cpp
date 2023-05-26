#include <bits/stdc++.h>
//liet ke cau hinh to hop chap k cua n phan tu
int b[20], n = 4, k=3;
void print(int k) {
	for (int i = 1; i <=k; i++)
		std::cout<<b[i];
	std::cout<<std::endl;
	
}

void trY(int i) {

	for(int j =0; j<=n; j++)
	{
		b[i]=j;
		if(i==k) print(k);
		else trY(i+1);
	}
}
main() {
	trY(1);
}