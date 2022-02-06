/*
Biến toàn cục trong c++
*/
/*
#include<iostream>
#include"Header.h"
using namespace std;
int g_x;
const int g_y(2);
void var() {
	g_x = 3;
	cout << g_y << "\n";
}
int main() {
	var();
	g_x = 5;
	cout << g_y << "\n";
		return 0;
}
*/
#include<iostream>
#include"Header.h"
using namespace std;
int g_value(6);// biến toàn cục (global variable)
int main() {
// tránh đặt trùng tên biến cục bộ với biên toàn cục
	int value = 9;// biến cục bộ (local variable)
	value++;
	g_value--;
/* sử dụng toán tử phân giải phạm vi ::value sử dụng 
cho biến toàn cục */
	cout << "bien toan cuc : " << g_value << "\n";
	cout << "bien cuc bo : " << value << endl;
	return 0;
}
























