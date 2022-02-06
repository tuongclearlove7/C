#include <iostream>
using namespace std;

void calculator(int a, int b, int& addOut, int& subOut){
	addOut = a + b;
	subOut = a - b;
}
int main(){
	int c(6), d(9);
	int add, sub;
	calculator(c, d, add, sub);
	cout << " a + b = " << add << endl;
	cout << " a - b = " << sub << endl;
	return 0;
}











