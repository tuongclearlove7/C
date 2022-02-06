/*Truyền tham chiếu cho hàm (function reference) */

#include<iostream>
using namespace std;
void callback(int &y) {// &y là biến tham chiêu
// khi có thêm & thì biến trong hàm sẽ là biến tham chiếu
	cout << "y = " << y << endl;
	y = 69;
	cout << "y = " << y << endl;
}
void calculator(int a, int b, int& addOut, int& subOut) {
	// khởi tạo 2 tham chiếu
	addOut = a + b;// gán tham số cho 2 tham chiếu
	subOut = a - b;
}
int main() {
	int x(1);
	cout << "x = " << x << endl;
	callback(x);// x là đối số
	// k thể truyền hằng số vào đối số
	cout << "x = " << x << endl;

	int c(6), d(9);
	int add, sub;
	calculator(c, d, add, sub);
	cout << " a + b = " << add << endl;
	cout << " a - b = " << sub << endl;
	return 0;
}
/*
#include<iostream>
using namespace std;
void printValue(const int& value) {
// truyền tham chiếu hằng
	cout << value << endl;
}
int main() {
	int x(1);
	printValue(x);
	printValue(5);// truyền đối số
	printValue(x + 5);// truyền biểu thức vào đối số
	return 0;
}
*/



















