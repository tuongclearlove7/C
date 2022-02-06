/*kiểu dữ liệu boolean*/
#include <iostream>
using namespace std;
int main() {
	bool b{ true };
	cout << b;
	cout << !b;
	bool b2{ false };
	cout << b2;
	cout << !b2;
	cout << std::boolalpha;
	/*sử dung để std::boolalpha; để xuất ra
	true or false*/
	cout << true;
	cout << false;
	cout << std::noboolalpha;
	/*sử dung để std::noboolalpha; để xuất ra
	1 or 0*/
	cout << true;
	cout << false;
	bool b3 = -1;
	//số khởi tạo khác 0 thì mặc định là true = 1
	cout << b3;
	bool b4 = 0;
	//số khởi tạo là 0 thì  là false = 0
	cout << b4;
}
	


















