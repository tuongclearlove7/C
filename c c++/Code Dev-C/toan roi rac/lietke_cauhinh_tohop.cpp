#include <bits/stdc++.h>
//liet cau hinh to hop
int b[20], n = 4;
void print(int k) {
	for (int i = 1; i <=k; i++)
		std::cout<<b[i];
	std::cout<<std::endl;
	
}

void trY(int i) {

	for(int j =0; j<=1; j++)
	{
		b[i]=j;
		if(i==n)
			print(n);
		else 
			trY(i+1);
	}
}
main() {
	trY(1);
}