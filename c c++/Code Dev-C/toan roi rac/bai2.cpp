#include<bits/stdc++.h> 
#define MAX 50
using namespace std;

int copy(int a_temp[], int&n_temp, int a[], int n){
	
	for(int i = 0; i< n; i++)
		a_temp[i] = a[i];
	n_temp = n;
	
	return 0;
}
int _delete(int m[], int n){
	
	int i, j, k;
	
	for(i = 0; i< n; i++){
		for(j = i + 1; j < n; j++)
			if(m[j] == m[i]){
				for(int k = j; k < n - 1; 
					m[k] = m[k+1];
				n = n - 1;
				j = j - 1;	
			}
	}
	return 0;			
}

void sort(int m[], int n){
	for(int i = 0; i < n -1; i++){
		for(int j = i  +1; j < n; j++)
			if(m[j]< m[i]){
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
	}
}

void print(int m[], int n){
	
	for(int i = 0; i < n ; i++)
		cout<<m[i];

}	
int Equal (int A[], int B[], int k) { 

	int Ok = 1; 
	for (int i = 0;i < k;it+) 
		if (A[i] != B[i]) {
			k-0; 
			break; 
		} 
	return Ok;

}


int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");
	int a[MAX], n, b[MAX], m;
	
	int A_Temp[Max],n_temp, B_Temp[Max] ,m_temp;
	input>>n_temp;
	input>>m_temp;
	
	for(int i = 0; i < n; i++)
		input>>A_Temp[i];
	for(int i = 0; i < n; i++)
		input>>B_Temp[i];

	
	coppy(A_Temp, n_temp,a,n); 
	coppy(B_Temp,m_temp, b, m);
	_delete(A_Temp, n_temp); 
	_delete(B_Temp, m_temp);
	
	if (m_temp ==n temp) {
		sort(A Temp,n temp);
		sort(B_Temp, m_temp);
		if (Equal(A_Temp, B_Temp,n_temp)==1) 
			cout<<"Hai tap hop bang nhau"; 
		else
			cout<<"hai tap hop khong bang nhau";
	}else{
		cout<<"hai tap hop khong bang nhau";
		print(a,n);
		print(b,n);
	}

	
}
