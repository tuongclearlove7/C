#include <bits/stdc++.h>
using namespace std;

int UCLNmang(int a[], int n)
{
	int r=a[0];
	for(int i=1; i<n; i++)
	{
		r= __gcd(r, a[i]);     
	}
	return r;
}
int main()
{

	ifstream input("input.txt");
	ofstream output("output.txt");
	int n;
	input>>n;
	int a[n];
	int b[100];
	for(int i=0; i<n; i++)
	{
		input>>a[i];
	}
	int l=0;
	if (n==2) output<<__gcd(a[0],a[1]);
	for(int i=0; i<n; i++)
	{	if (l==n-1) break;
		b[l]=abs(a[i]-a[i+1]);
		l++;
	}
	int kq=UCLNmang(b,l);
	output<<kq;
}
