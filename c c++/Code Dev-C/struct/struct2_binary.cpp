#include<bits/stdc++.h>
#include <iostream>

//cho so n hay chuyen tu he thap phan sang he nhi phan

std::string chuyen_thapphan_thanh_nhiphan(int d){
	
    
    std::string b = "";

    while (d > 0) {
        int r = d % 2;
        b = std::to_string(r) + b;
        d /= 2;
    }
    

    return b;
}

int chuyen__thapphan__thanh__nhiphan(int n){
	
	if(n>0){
		chuyen__thapphan__thanh__nhiphan(n/2);//de quy
		std::cout<< n%2;

	}
	return 0;
}

main() {
	
	int d = 13;
	int a = 13;
	int k = a/=2;
	int n = 13;
	std::string binaryNumber = chuyen_thapphan_thanh_nhiphan(d);
	std::cout<<binaryNumber;
	std::cout<<std::endl;
	std::cout<<k;
	std::cout<<std::endl;
  	chuyen__thapphan__thanh__nhiphan(n);
  	

}


