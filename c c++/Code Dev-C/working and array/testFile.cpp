#include<bits/stdc++.h>
#include<string>
#include <algorithm>
using namespace std;


int main()
{

	ifstream input("bai1.txt");
    
  
  	ofstream output("kqbai1.txt");
      
 
  while(!input.eof()){
   
    string text;
        
    getline(input, text);
        
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    output << text << endl;
	 
	}	
}
