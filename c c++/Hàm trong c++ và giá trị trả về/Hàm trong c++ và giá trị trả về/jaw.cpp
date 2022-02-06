/*
 Hàm trong c++ (jaw) hay còn gọi là function
*/
// bài toán tính tuổi khi nhập năm sinh vào
// sử dụng hàm void sẽ k có return giá trị
#include <iostream>
using namespace std;
void str() {
	cout << "\nHello world!\n";
}
// gọi chồng chéo hàm 
void integer() {
	cout << 7;
	str();
}
int return69() {
	return 69;
	return 59;
}
int main() {
	int year;
	cout << "Enter your year of birth : ";
	cin >> year;
	int age = 2022 - year;
	cout << "Your age : " << age << endl;

	str();//call back
	integer(); //call back

	cout << return69() << endl;
	int sum = return69() + 1;
	cout << sum << endl;
	return69();
	return 0;
}















