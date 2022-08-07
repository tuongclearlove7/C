#include<iostream>
#include<string.h>
#include <ctime>
#include <unistd.h>

using namespace std;
int main(){
	string str[8] = {"bin", "cla", "del", "for", "lon", "pre", "sta", "try"};
	int i, N;
	string S;
	S = "";
	for (i = 0; i < 3; i++) { 
	  N = random(8);
	  S += str[N];
	}
}










