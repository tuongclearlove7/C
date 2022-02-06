// câu điều kiện switch case trong c++
#include <iostream>
using namespace std;
int main(){
// kiểm tra số ngày trong 1 tháng 
	int month;
	cout << "Month: ";
	cin >> month;
	switch (month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		//int year = 2017;
		int day;// có thể khai có biến day ở đây
		day = 30;//khởi tạo giá trị
		cout << day << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
	{
		int year = 2018;
		day = 31;
		cout << day << endl;
		break;
	}
	default:
		int year = 2017;
	return 0;
}
























