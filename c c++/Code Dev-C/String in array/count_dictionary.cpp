#include<bits/stdc++.h>
#include <string.h>
#include <iostream>

using namespace std;
string count_dic(string str){
	
	string longest = "";
    string current = "";
  
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            current += str[i];
        } else {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = "";
        }
    }
  
    if (current.length() > longest.length()) {
        longest = current;
    }
    
    return longest;
}

int main() {

    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
  
    cout << "Ky tu dai nhat trong chuoi: " << count_dic(str) << endl;
  
    return 0;
}
