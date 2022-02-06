/*Toán tử gán số học*/
#include <iostream>
using namespace std;
int sum(int a, int b)
{
	return a + b;
}
int main()
{
	int x = 9;
	int y = 9;

	x = x + 6; // x += 6
	cout << "x = x + 6 = " << x << endl;

	y += 6; // y = y + 6
	cout << "y += 6 = " << x << endl;

	int z = sum(x, y);
	cout << "Sum of x and y is " << z << endl;

	return 0;
}

























