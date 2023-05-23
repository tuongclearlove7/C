#include<iostream>
#include<stdio.h>
int B[20],n=6,k=3;
void Print(int k){
	for (int i=1;i<k;i++)
		printf("%d\t",B[i]);
	printf("\n");
}
int Cnk(int n,int k){
	if(k==0||k-n)
		return 1;
	return Cnk(n-1,k)+Cnk(n-1,k-1);
}
void LKTH(int n, int k){
	for(int i=1;i<=k;i++)
		B[i]=i;
	Print(k);
	for(int c=1;c<Cnk(n,k);c++){
			int i=k;
			while(B[i]==n-k+i)i=i-1;
			B[i]=B[i]+1;
			for(int j=i+1;j<k;j++)
			B[i]=B[i-1]+1;
			Print(k);
		}
}
main(){
	LKHV(n,k);
}
