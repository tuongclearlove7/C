/* Toán tử số học (Arithmetic Operator)
Toán tử 1 ngôi (Unary) : + , - , ++, --
Toán tử 2 ngôi (Binary) : + , -, *,/,
% :  Toán tử chia lấy dư 
toán tử 3 ngôi (ternary) : ?:
*/
// bài toán in ra số chẵn từ 0 đến 100
/*#include <iostream>
using namespace std;
int main()
{
	int count = 1; 
	while (count <= 100)
	{
		if (count % 2 == 0)
			cout << count << "\t"; 
		if (count % 10 == 0)
			cout << "\n";
		count = count + 1; 
	return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
	int x = 9;
	int y = 6;
	int n = 69;
	int a = ++n;/*toán tử 1 ngôi tăng giảm tiền tố làm tăng lên 1 đơn vị*/
	int b = 99;
	int c = b++;/*toán tử 1 ngôi tăng giảm hậu tố làm tăng lên 1 đơn vị*/
	cout << "int % int = " << x % y << "\n";
	cout << "int / int = " << x / y << "\n";
	cout << "double / int = " << (1.0 * x) / y << "\n";
	cout << "int / double = " << x / (1.0 * y) << "\n";
	cout << "double / double = " << (1.0 * x) / (1.0 * y) << "\n";
	cout << "double / int = " << static_cast<double>(x) / y << "\n";
	cout << "int / double = " << x / static_cast<double>(y) << "\n";
	cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";
	cout << n<<"\n";
	cout << a << endl;
	cout << b << "\n";
	cout << c;
	return 0;
}















