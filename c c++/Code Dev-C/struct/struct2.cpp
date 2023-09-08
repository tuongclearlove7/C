#include<bits/stdc++.h>
#include <iostream>

using namespace std;

//cho 1 day so 1 2 3 5 8 13
//cho n hay tim gia tri n

long long int f(int n){
	
	int c = 0;
	
	if(n < 4) return n;
	return f(n - 2) + f(n - 1);
	
}

long long ff(int n){
	
	if(n < 4) return n;
	long long a = 2, b=3 , c=0;
	for(int i = 3; i<n; i++){
		c=a+b;
		a=b;
		b=c;
	}
	
	return c;
	
}

main() {
	//ifstream input("input.txt");
	//ofstream output("output.txt");
	long long int n=100;
	//input>>n;
	//output<<f(n);
	//std::cout<<f(n)<<endl;
	std::cout<<ff(n);
}


