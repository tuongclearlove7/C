#include <iostream>
using namespace std;
int main() {
	float a;
	cout << "nhap a = ";
	cin >> a;
	if (a > 10 || a < 0)
		cout << "nhap sai";
	else if (a<7&&a>=5) 
		cout << "xep loai trung binh";
	else if (a < 5)
		cout << "xep loai yeu";
	else if (a >= 8) 
		cout << "xep loai gioi";
	else
		cout << "xep loai kha";
	
	return 0;
}