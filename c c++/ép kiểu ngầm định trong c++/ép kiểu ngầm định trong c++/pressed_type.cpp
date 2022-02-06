/*
		ép kiểu ngầm định trong c++
*/
/*
#include <iostream>
using namespace std;
int main(){
	int n = 1000;
	char c = n; // gán giá trị biến n cho c
	cout << static_cast<int>(c);// ép kiểu
	return 0;
}
*/
/*
// kiểu double có độ chính xác là 17 ký tự
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double t = 0.123456789;/*nếu cho f vào duôi số nguyên thì 
là kiểu float còn k thì là kiểu double*/ 
/* nếu thay vào double là kiểu float thì số sẽ bị thay đổi độ
chính xác
	cout << setprecision(9) << t << "\n";
	return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double d = 1.5322432;//ép kiểu double sang số nguyên
	int n = d;//gán giá trị của d cho n
	cout << n << endl;
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	bool b(2);
	char c(6);
	short d(9);
	cout << typeid(b + c + d).name() << " " << b + c + d << endl;
// dùng hàm typeid để kiểm tra kiểu dữ liệu
	return 0;
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	short s(1);
	int n(2);
	double d(1.0);
	cout << typeid((s + d) * n).name() << " " << (s + d) * n << endl;
	// kiểm tra kiểu dữ liệu
	return 0;
}










