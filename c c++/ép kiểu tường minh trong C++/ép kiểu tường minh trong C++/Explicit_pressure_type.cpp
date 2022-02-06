/*
		ép kiểu tường minh trong C++
*/
#include <iostream>
using namespace std;
int main() {
	double d1 = 3 / 2;
	double d2 = 3.0 / 2;
	double d3 = 3 / 2.0;
	cout << d1<<endl;
	cout << d2<< endl;
	cout << d3<< endl;
	cout << "_______________________________________\n";
	int n1 = 3;
	int n2 = 2;
	double i = (double)n1 / n2;//ép thành kiểu double
	double i_2 = double(n1) / n2;// cách 2
	cout << i << endl;
	cout << i_2 << endl;
	int n = 75;
	cout << static_cast<char>(n) << endl;
	// ép thành kiểu char
	char c = 'K';
	cout << static_cast<int>(c) << endl;
	//ép thành kiểu int
	int a1 = 3;
	int a2 = 2;
	double k = static_cast<double>(a1) / a2;
	// ép thành kiểu double
	cout << k << endl;
	return 0;
}
















					
					
		
			
		














