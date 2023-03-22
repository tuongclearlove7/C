#include <iostream>
#include <fstream>
#include <string>

int main () {
  
    std::ofstream write("num.txt");
	double arr[5];
	int count = 0;
	int length = sizeof(arr)/sizeof(arr[0]);
	
		write <<length<<"\n";
	
		for(int i = 0; i<length; i++){
			
			std::cout<<"nhap : ";
			std::cin>>arr[i];
	
   			write <<arr[i]<<"\t";
   		
		}
	
		for(int i = 0; i<length; i++){
		
			if(arr[i] < 5){
				
				count++;
			}
		}
	
		std::cout<<"\nco "<<count<<" phan tu be hon 5\n";
   
  		write.close();

  
  		std::string myText;

  
  		std::ifstream read("num.txt");

  
		while (getline (read, myText)) {
		   
		    std::cout <<"\nfile text : "<<myText;
		}

  
  		read.close();
}
