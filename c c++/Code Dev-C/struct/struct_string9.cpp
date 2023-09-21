#include<iostream>
using namespace std;

int len(char a[]){
    int i=0;
    while(true){
        if(a[i]=='\0'){
            return i;
        }
        i++;
    }
}

string mid(char a[], int l, int r){
    string str;
    
    //leng = len(a)
    for (int i = l-1; i < r+l; i++) {
        str += a[i];
    }
    
    return str;
}


string left(char a[],int n){

	 string str;
     
     for(int i=0;i<n;i++){
        str += a[i];
     }
	 return str;
}

string right(char a[], int n){

	string str;
	
	for(int i=len(a)-n;i<len(a);i++){
		str+=a[i];
	}
	 return str;
}

string toUpperChar(char a[]){
	
	string str;
	
	for(int i=0; i < len(a); i++){
		if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32; 
	    }
	    str+=a[i];
	}
	str+' ';
	return str;
}


std::string toLowerChar(char a[]) {
    std::string str;

    for (int i = 0; i<len(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;  
        }

        str += a[i];
        
    }
    
    str+' ';

    return str;
}



int main(){
    char a[] = "truong dai hoc duy tan";
    int l = 7;
    int r = 11;
    int n = 4;
    
    tolower(32);
    
    cout<<left(a, 7)<<endl;
    cout << mid(a, 8, 7) << endl; 
    cout<<right(a, 7)<<endl;
    cout<<toUpperChar(a)<<endl;
	cout<<toLowerChar(a)<<endl;    
  
    
    return 0;
}
