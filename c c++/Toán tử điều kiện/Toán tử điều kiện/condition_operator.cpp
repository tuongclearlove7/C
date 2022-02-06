/*Toán tử điều kiện*/
#include <iostream>
using namespace std;
int main()
{
	/*
	int x{5}, y{10}, max;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	cout << "max = " << max << endl;
	// Tương đương nhau
	max = (x > y) ? x : y;
	cout << "max = " << max << endl;
	*/
	
	// bài toán lấy ra số lớn nhất
	int a{1}, b{2}, c{3}, max;
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << "max = " << max << "\n";
	return 0;
}


























