#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0)cout << "phuong trinh vo so nghiem";
	else if (a == 0)cout << "phuong trinh vo nghiem";
	else cout << (float)-b / a;
	return 0;
}