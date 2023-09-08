#include<bits/stdc++.h>
using namespace std;
bool xet(string s){
	char* c = new char[s.length()+1];
	c[s.length()] = '\0';
	for (int i = 0; i < s.length(); i++) {
        c[i] = s[i];
    }
    if(c[0]!='F') return 0;
    if(s.length()>1) if(c[1]!='F'&&c[1]!='D') return 0;
    for(int i=2;i<s.length();i++){
    	if(c[i]!='F'&&c[i]!='D') return 0;
    	if(c[i]=='F') continue;
    	if(c[i]=='D'){
    		if(c[i-1]=='F'||(c[i-2]=='F'&&c[i-1]=='D')) continue;
    		else return 0;
		}
	}
	return 1;
}
int main(){

	ifstream input("input.txt");
	ofstream output("output.txt");
	
	int n; 
	input >> n;
	string s[n];

	for(int i=0;i<n;i++){
		
		input >> s[i];
	}
	
    for(int i=0;i<n;i++){
    	if(xet(s[i])==1) output<<"Yes"<<endl;
    	else output<<"No"<<endl;
	}
}