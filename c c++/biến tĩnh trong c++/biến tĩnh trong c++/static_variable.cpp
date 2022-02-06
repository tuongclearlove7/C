/* biến tĩnh trong c++ (static variable) */
/*
#include <iostream>
#include<string>
using namespace std;
void var() {
	int value(0);
	value++;// toán tử hậu tố
	cout << value << "\n";
}
void var_static() {
/* đối với biến tĩnh (variable static) thì khi với
s_value++ gọi 1 lần thì tăng dần 1 đơn vị gọi lần 2
thì biến sẽ thay đổi là tăng dần lên ...
*/
/*static int s_value(0);
s_value++;
cout << s_value << endl;
}
// biến tĩnh k sử dụng đc bên ngoài khối lệnh
int main() {
	// callback gọi hàm có biến cục bộ (local variable)
	var();
	var();
	var();
	// callback gọi hàm có biến tĩnh (static variable)
	var_static();
	var_static();
	var_static();
	return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int getID() {
	static int s_ID = 0; 
// biến s_ID sẽ liên tục tăng vì nó là biến tĩnh
	++s_ID;
	return s_ID;
}
int main() {
	int nID1 = getID(); 
	/* getID đc gán vào trc nID1, nID2, nID3 */
	string name_1("tuong");
	int nID2 = getID();
	string name_2("clearlove7");
	int nID3 = getID();
	string name_3("thaoroser");
	cout << nID1 << " : " + name_1 << endl;
	cout << nID2 << " : " + name_2 << endl;
	cout << nID3 << " : " + name_3 << endl;
	return 0;
}






















