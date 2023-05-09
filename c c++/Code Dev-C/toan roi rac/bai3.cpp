#include<bits/stdc++.h> 


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

void print(int m[], int n){
	
	for(int i = 0; i < n ; i++)
		cout<<m[i];

}	

int main()
{




}
