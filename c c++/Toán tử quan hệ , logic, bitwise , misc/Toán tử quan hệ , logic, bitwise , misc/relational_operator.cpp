/*Toán tử quan hệ , 
toán tử logic : ! , && , ||  
, bitwise, misc*/
#include <iostream>
#include <iomanip>	// for std::setprecision()
using namespace std;
int sum(int a, int b)
{
	return a + b;
}
int main()
{
	cout << "Enter an integer: ";
	int x;
	cin >> x;
	cout << "Enter another integer: ";
	int y;
	cin >> y;
	if (x == y)
		cout << x << " == " << y << "\n";
	if (x != y)// toán tử so sánh khác
		cout << x << " != " << y << "\n";
	if (x > y)
		cout << x << " > " << y << "\n";
	if (x < y)
		cout << x << " < " << y << "\n";
	if (x >= y)
		cout << x << " >= " << y << "\n";
	if (x <= y)
		cout << x << " <= " << y << "\n";

// Toán tử quan hệ với số chấm động	
	double	d1{ 1.0 };
	double	d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	if (d1 == d2)
		cout << "d1 == d2" << "\n";
	else if (d1 > d2)
		cout << "d1 > d2" << "\n";
	else if (d1 < d2)
		cout << "d1 < d2" << "\n";
	cout << std::setprecision(20);	// show 20 digits
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	// bài toán về toán tử logic
		cout << "Enter a number: ";
		int value;
		cin >> value;

		if (!value)// toán tử not
			cout << value << " is false" << endl;
		else
			cout << value << " is true" << endl;

		if ((value > 1) && (value < 100))// toán tử and
			cout << value << " is between 1 and 100" << endl;
		else
			cout << value << " is not between 1 and 100" << endl;

		if ((value == 1) || (value == 100))// toán tử or
			cout << value << " == 1 or " << value << " == 100" << endl;
		else
			cout << value << " != 1 or " << value << " != 100" << endl;
	return 0;
}


	
	






















