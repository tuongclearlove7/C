#include<bits/stdc++.h>

/*You are given an array containing n integers. 
Your task is to determine the longest increasing subsequence in the array, i.e., 
the longest subsequence where every element is larger than the previous one.
A subsequence is a sequence that can be derived 
from the array by deleting some elements without 
changing the order of the remaining elements.
Input The first line contains an integer n : the size of the array.
After this there are nintegers x1,x2,…,xn : the contents of the array.
Output
Print the length of the longest increasing subsequence.
Constraints
1=n=2·105
1=xi=109*/

using namespace std;

int main()
{
	
	ifstream input("input.html");
	ofstream output("output.html");
	
	//Quy hoach dong - Tim do dai day Con Tang dai nhat Khong lien tiep C++
	// l[i]	: do dai cua day con tang dai nhat ket thuc o chi so i
	// l[i] = max(l[i], l[j]+1) : a[i] > a[j]
	// document : https://www.youtube.com/watch?v=M3g08UNvR04&list=RDCMUCH4feIymLH816-rZ2rsUdKw&start_radio=1&rv=M3g08UNvR04&t=0
	int n;input>>n;
	int a[100];
	int l[100];
	
	for(int i = 0; i < n; i++)
		input>>a[i];
		
	int lmax = 0;
	l[0] = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = 1; j < i; j++){
			if(a[i] > a[j])
			   if(l[j] > lmax)
			   	  lmax = l[j];
					
		}
		
		l[i] = lmax + 1;
	}
	

	
	int max = 0;
	for(int i = 0; i < n; i++)
		if(l[i] > max)
		   max = l[i];
		   
	output<<max;
	
	input.close();
	output.close();
	
}
