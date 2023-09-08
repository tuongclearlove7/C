#include<bits/stdc++.h>
#include <iostream>
//cho so n hay chuyen tu he thap phan sang he nhi phan

using namespace std;


int chuyen__thapphan__thanh__nhiphan(int n){
	
	if(n>0){
		chuyen__thapphan__thanh__nhiphan(n/2);//de quy
		cout<< n%2;
	}
	return 0;
}

int chuyen_thapphan_thanh_nhiphan(int n){
	
	if(n==0){
	    return 0;
	}
	else{
	    return n%2 + chuyen_thapphan_thanh_nhiphan(n / 2) * 10;
	}
}

main() {
	
	int d = 13;
	chuyen__thapphan__thanh__nhiphan(d);
	std::cout<<std::endl<<chuyen_thapphan_thanh_nhiphan(d)<<std::endl;
	int k = d/=2;
	cout<<k<<endl;

}


