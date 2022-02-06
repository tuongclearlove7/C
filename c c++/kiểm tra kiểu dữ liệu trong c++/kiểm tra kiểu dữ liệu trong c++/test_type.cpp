#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void type() {
	cout << endl;
	string a = "Hello world!";
	cout << a << endl;
	cout << "kieu du lieu la : " << typeid(a).name() 
	<< endl << "kick co la : " << sizeof(a) 
	<< "\n" << "do dai la : " << a.length();
}
int main() {
	type();
}












