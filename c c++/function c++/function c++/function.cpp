/*
 Hàm trong c++ (jaw) hay còn gọi là function
*/
//bài toán dùng hàm để tính tuổi khi nhập năm sinh vào
// sử dụng hàm void sẽ k có return giá trị
#include <iostream>
using namespace std;
void count() {
	int year;
	cout << "Enter your year of birth : ";
	cin >> year;
	int age = 2022 - year;
	cout << "Your age : " << age << endl;
}
int main() {
	string hello = "hello world!\n";
	cout << hello;
	count();//callback
    count();
	return 0;
}





