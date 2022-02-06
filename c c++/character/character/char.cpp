/*kiểu dữ liệu ký tự character (char) 
 */ 
#include <iostream>
using namespace std;
int main() {
	char c1{75};
	cout << c1;
	char c2{'K'};
	cout << c2;
	// xuất ra là ký tự
	char c3{ 75 };
	//dùng static_cast ép thành kiểu ký tự
	cout << static_cast<char>(c3);
	// xuất ra số nguyên
	char c4{ 'K' };
	//dùng static_cast ép thành kiểu số nguyên
	cout << static_cast<int>(c4);
	int c5{ 275 };
	cout << static_cast<char>(c5);
	// xuất ra ký tự lạ
}



















