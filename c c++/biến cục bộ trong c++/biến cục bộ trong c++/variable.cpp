/* biến cục bộ trong c++ */
/*
#include <iostream>
using namespace std;
void Myfunction() {// tạo hàm
	int value(4);
	value = 12;
	cout  << value << "\n";
}
int main() {
	int x(6);
	{
	 int y(9);
	 Myfunction();// callback
	 cout << x << " + " << y << " = " << x + y << endl;
	}
	// không thử sử dụng biến ở dưới đây

	int a(6);
		if (a >= 6) {
			// biến bên trong sẽ thực hiện trc mặc dù trùng tên
			int a;
			a = 10;
			cout << a << endl;
		}
		cout << a << endl;
		return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
	int y(6);

	{
		cout << "nhap vao : ";
		int x;
		cin >> x;
		
		if (x == 9)
			y = 9;
	} 
	
	cout << y; 

	return 0;
}

