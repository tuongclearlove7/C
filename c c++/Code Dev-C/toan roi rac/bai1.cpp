#include<bits/stdc++.h> 
using namespace std;

int card(int a[], int s[], int n){
	
	int k = 0;
	for(int i = 0; i<n; i++)
		if(s[i] == 1){
			for(int j = i + 1; j<n;j++)
				if(a[i] == a[j])
					s[j] = 0;
			s[i] = 0;
			k++;
		}
	return k;
}

int main()
{

//	int a[5] = {1,2,3,4};
//	int s[5] = {1,1,1,1};
	ifstream input("input.txt");
	ofstream output("output.txt");
	//int n = 4;
	int n;
	input>>n;
	int a[n];
	int s[n];

	for(int i = 0; i < n; i++)
		input>>a[i];
	for(int i = 0; i < n; i++)
		input>>s[i];

	std::cout<<"chuong trinh tinh luc luong tap hop"<<std::endl;
	output<<card(a,s,n);
//	std::cout<<"res = ";
//	std::cout<<card(a,s,n);
	
}
