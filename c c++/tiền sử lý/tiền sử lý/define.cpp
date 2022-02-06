#include <iostream>
using namespace std;
//định nghĩa 1 marco bằng chỉ thị tiền sử lý #define
#define year_of_birth 1612002
// khai báo prototype
void printyearofbirth();
int main() {
	/*cout << "year of birth : " << year_of_birth;
	// khởi tạp 1 biến int vs giá trị 2022
	int year{ year_of_birth };
	return 0;*/
	cout << "year of birth : " << year_of_birth << "\n";
	//định nghĩa 1 marco trùng tên
#define	year_of_birth 16 //  tham số  có thể bị thay đổi
		printyearofbirth();
	return 0;
}
//định nghĩa hàm
void printyearofbirth(){
	cout << "year of birth : " << year_of_birth;
}












