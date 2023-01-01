#include <iostream>

bool accept(){
	
	std::cout << "Do you want to proceed (y or n)?\n"; 
	char answer = 0;
	std::cin >> answer; 
	
	while(true){
		
		if (answer == 't') {
		
			break; // break
		}
	}
	
		
	return false;
}


int main(){
	
	
	
	int v1[10] = {0,1,2,3,4,5,6,7,8,9};
	int v2[10]; 
	
	
	for (int i=0; i!=10; ++i) {
	
		v2[i] = v1[i];
	}
	
	
	//assign array element	
	for (int i=0; i!=10; ++i) {
		
		//std::cout<<v2[i];
	}	
	
	char v[6];
	
	char* p = &v[3]; // p points to v’s four th element
	char x = *p; 
	
	std::cout<<x;
	
	
}
